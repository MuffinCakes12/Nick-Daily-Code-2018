#include <iostream>
#include <time.h>
using namespace std;
int main() {
	srand(time(NULL));

	char input = 'a';
	int room = 1;
	while (input != 'q') {
		int num = rand() % 6 + 1;
		
		switch (room) {
		case 1:
			cout << "You're in room 1, you can go (s)" << endl;
			cin >> input;
			if (input == 's')
				room = 2;
			break;
		case 2:
			cout << "You're now in room 2, you can go (w), (e), (n)" << endl;
			cin >> input;
			if (input == 'e')
				room = 4;
			if (input == 'w')
				room = 3;
			if (input == 'n')
				room = 1;
			break;
		case 3:
			cout << "You're in room 3, you can go (e) or (s)" << endl;
			cin >> input;
			if (input == 'e')
				room = 2;
			if (input == 's')
				room = 5;
			break;
		case 4:
			cout << "You are in room 4. You can go (w) or (s)" << endl;
			cin >> input;
			if (input == 'w')
				room = 2;
			if (input == 's')
				room = 6;
			break;
		case 5:
			cout << "You are in room 5. You can go (s) or (n)" << endl;
			cin >> input;
			if (input == 's')
				room = 7;
			if (input == 'n')
				room = 3;
			break; 
		case 6:
				cout << "You are in room 6. You can go (s) or (n)" << endl;
				cin >> input;
				if (input == 's')
					room = 8;
				if (input == 'n')
					room = 4;
				break;
		case 7:
			cout << "You are in room 7. You can go (n) or (e)" << endl;
			cin >> input;
			if (input == 'n')
				room = 5;
			if (input == 'e')
				room = 9;
			break;
		case 8:
			cout << "You are in room 8. You can go (n) or (w)" << endl;
			cin >> input;
			if (input == 'n')
				room = 6;
			if (input == 'w')
				room = 9;
			break;
		case 9:
			cout << "You are in room 9. You can go (w), (e), or (s)" << endl;
			cin >> input;
			if (input == 'w')
				room = 7;
			if (input == 'e')
				room = 8;
			if (input == 's')
				room = 10;
			break;
		case 10:
			cout << "You are in room 10. You can go (n)" << endl;
			cin >> input;
			if (input == 'n')
				room = 9;
			break;

		} // End of Switch 
	} // End of While Loop
} // End of Main