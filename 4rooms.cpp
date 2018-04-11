#include <iostream>
#include<ctime>
using namespace std;
int main() {

	srand(time(NULL));
	int x;
	char input = 'a';
	int room = 1;


	while (input != 'q') {

		switch (1) {

		case 1:
			cout << "You're in zone 1 a cold and barren location a cold wind whips around you. 1 truly is the loneliest number, you can go (e)" << endl;
			cin >> input;
			if (input == 'e') {
				room = 2;

			}
			break;

		case 2:
			cout << "You're now in zone 2 you slowly start drifting throughout space slowly, you watch as atoms collide. Are you witnessing the beginning of the universe itself? You can go (s)" << endl;
			cin >> input;
			if (input == 's') {
				room = 3;

			}
			break;

		case 3:
			cout << "You're in zone 3 you get an awkard feeling as if the space itself is watching you. As you explore something reaches out and whispers in your ear" << endl; cout << "you can go (e)" << endl;
			cin >> input;
			if (input == 'e') {
				room = 4;

			}
			break;

		case 4:
			cout << "You are in zone 4 this zone is full of water, although it feel thicker you press on as you swim it slows you down. You panic and feel as if you are about to drown" << endl; cout << " You can go(w)" << endl;

			cin >> input;
			if (input == 'w') {
				room = 3;
				break;
			}
		}
	}
}