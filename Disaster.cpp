#include<iostream>
#include<ctime>
using namespace std;
char disaster();
int main() {
	
	srand(time(NULL));
	while (1) {
		cout << "is a disaster gonna happen?" << endl;
		
		disaster();
		system("pause");
		}
} //While Loop Bracket
char disaster() {
	int natural = rand() % 100 + 1;
	if (natural < 10) {
		cout << "fire!" << endl;
		return 'f';
		
	}
	else if (natural < 25) {
		cout << "radroaches!" <<endl;
		return'r';
		
	}
	else if (natural < 37) {
		cout << "Raider Attack!"<<endl;
		return'a';
		
	}
	else if (natural < 40) {
		cout << "Mole Rats!" << endl;
		return'm';
		
	}
	else if (natural < 60) {
		cout << "Nothing Happens" << endl;
		return'n';
		
	}
	
}