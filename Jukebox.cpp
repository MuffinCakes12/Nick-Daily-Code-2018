#include<iostream>
#include<windows.H>
using namespace std;

int main() {
	int input=0;

	while (input != 'q') {
cout << "What song would you like to hear? 1- Song A, 2- Song B, 3- Song C, 4-Song D." << endl;
			cin >> input;
		switch (input) {
			
		case 1: cout << "Song A" << endl;
			PlaySound(TEXT("Cantina-Band-STAR-WARS-Piano-Cover-hard-sheets.wav"), NULL, SND_FILENAME);
			break;				
		case 2: cout << "Song B" << endl;
			break;
		case 3: cout << "Song C" << endl;
			break;
		case 4: cout << "Song D" << endl;
			break;
		}
	}
}