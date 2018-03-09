#include<iostream>
#include<ctime>
using namespace std;
void RandomColor();
int main() {

	srand(time(NULL));
	while (1) {
		RandomColor();
	}
	
}
void RandomColor() {
		int color = rand() % 8 + 1;
		switch (color) {
		case 1:
			system("Color 1A");
		case 2:
			system("Color 2B");
		case 3:
			system("color 3c");
		case 4: 
			system(" color 4C");
		case 5: 
			system("color 5d");
		case 6: 
			system("color 6D");
		case 7:
			system("color 7E");
		case 8:
			system("color 8F");
				


		}
	}