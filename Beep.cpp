#include <Windows.h>
using namespace std;
#include <iostream>
int main() {
	int a;
	cout << "How many times would you like to hear a song?"<<endl  ;
	cin >> a;
	//start at 0, go until you hit a, count by ones 
	for (int i = 0; i < a; i++) {

		Beep(200, 400);

		
		
	}
	system("pause");
}