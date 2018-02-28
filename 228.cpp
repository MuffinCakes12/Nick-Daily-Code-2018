#include<iostream>
#include<time.h>
#include<ctime>
using namespace std;


int main() {
	srand(time(NULL));



	while (1) {
		cout << '*';
		int snow = rand() % 100 + 1;
		for (int i = 0; i<snow; i++)
			cout << " ";

	}
}