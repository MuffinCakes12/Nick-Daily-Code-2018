#include<iostream>
using namespace std;
int main() {
	double i = 1;


	while (i > 0) {
		cout << " May we see your bill sir?" << endl;
		cin >> i;
		cout << i*0.15 << endl;
	}


	system("pause");
}