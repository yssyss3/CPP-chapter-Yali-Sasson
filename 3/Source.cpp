#include "Beer.h"
#include"CarmelEmeraldRiesling.h"
#include "ChadeauMargot.h"
#include "Chianti.h"
#include "GolanSmadar.h"
#include "YardenCabernetSauvignon.h"
#include "YardenChardonnay.h"
#include "YardenMountHermonRed.h"

int main() {
	const int SHELF_SIZE = 11;

	int choice = -1;
	Drink* last = NULL;

	Drink *stock[SHELF_SIZE];
	stock[0] = new Beer("Maccabi");
	stock[1] = new Beer("carlsberg");
	stock[2] = new Beer("Tuborg");
	stock[3] = new Beer("heineken");
	stock[4] = new CarmelEmeraldRiesling(1986);
	stock[5] = new GolanSmadar(1989);
	stock[6] = new YardenMountHermonRed(1994);
	stock[7] = new ChadeauMargot();
	stock[8] = new Chianti();
	stock[9] = new YardenCabernetSauvignon();
	stock[10] = new YardenChardonnay();

	while (choice != 100) {
		std::cout << "What can I get for you sir? (0 - list options)" << std::endl;
		std::cin >> choice;
		if (choice == 0) {
			std::cout << "(0) list options" << std::endl;
			for (int i = 0; i < SHELF_SIZE; i++) {
				std::cout << "(" << (i + 1) << ")" << stock[i]->getName().c_str() << std::endl;
			}
			std::cout << "(99) How did you prepare my last drink?" << std::endl;
			std::cout << "(100) Leave the bar" << std::endl;
		}

		else if (choice > 0 && choice < SHELF_SIZE) {
			std::cout << "One " << stock[choice - 1]->getName().c_str() << " coming up, sir." << std::endl << std::endl;
			last = stock[choice - 1];
		}

		else if (choice == 99) {
			if (last == NULL) {
				std::cout << "you didn't order anything yet." << std::endl;
			}
			else {
				std::cout << "You ordered " << last->getName().c_str() << std::endl;
				last->prepare();
			}
		}

		else if (choice == 100) {
			std::cout << "Bar is closed. Good night." << std::endl;
		}

		else {
			std::cout << "invalid choice. choose again" << std::endl;
		}
	}

	

	for (int i = 0; i < SHELF_SIZE; i++) {
		delete stock[i];
	}
}
