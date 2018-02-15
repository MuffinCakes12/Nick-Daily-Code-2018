#include <iostream>
using namespace std;
int main() {
	

	char input='a';
	int room = 1;
	while (input != 'q') {
		switch (room) {
		case 1:
			cout << "You're in room 1, you can go (s)" << endl;
			cin >> input;
			if (input == 's')
				room = 2;
			break;
		case 2:
			cout << "You're now in room 2, you can go (n) or (e)" << endl;
			cin >> input;
			if (input == 'e')
				room = 3;
			if (input == 'n')
				room = 1;
			break;
		case 3:
			cout << "You're in room 3, you can go (w) or (s)" << endl;
			cin >> input;
			if (input == 'w')
				room = 2;
			if (input == 's')
				room = 4;
			break;
		case 4:
			cout << "You are in the final room, room 4. You can go (n)" << endl;
			cin >> input;
			if (input == 'n')
				room = 3;
			break;

		}
	}
	cout << "frick";
}