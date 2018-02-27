#include <iostream>
#include <time.h>
using namespace std;
int main() {


	char input = 'a';
	int room = 6;
	while (input != 'q') {
		

		switch (room) {

		case 1:
			cout << "You're in zone 1 a cold and barren location a cold wind whips around you. 1 truly is the loneliest number, you can go (s)" << endl;
			cin >> input;
			if (input == 's')
				room = 2;
			break;

		case 2:
			cout << "You're now in zone 2 you slowly start drifting throughout space slowly, you watch as atoms collide. Are you witnessing the beginning of the universe itself? You can go (w), (e), (n)" << endl;
			cin >> input;
			if (input == 'e')
				room = 4;
			if (input == 'w')
				room = 3;
			if (input == 'n')
				room = 1;
			break;

		case 3:
			cout << "You're in zone 3 you get an awkard feeling as if the space itself is watching you. As you explore something reaches out and whispers in your ear" << endl; cout<< "you can go (e) or (s)" << endl;
			cin >> input;
			if (input == 'e')
				room = 2;
			if (input == 's')
				room = 5;
			break;

		case 4:
			cout << "You are in zone 4 this zone is full of water, although it feel thicker you press on as you swim it slows you down. You panic and feel as if you are about to drown" << endl; cout<<" You can go(w) or (s)" << endl;
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