#include <iostream>
using namespace std;
int Area(int x, int y);

int main() {
	int a;
	int b;
	cout << "Please provide a value for Length" << endl;
	cin >> a;
	cout << "Please provide a value for Width" << endl;
	cin >> b;
	cout <<"The area of the rectangle is "<< Area(a, b) << endl;
	system("pause");
}
int Area(int x, int y) {
	return x*y;
}