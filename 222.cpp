#include <iostream>
using namespace std;
int Area(int x, int y) {
	return x*y;
}
int main() {
	int x;
	int y;
	cout << "Please provide a value for Length" << endl;
	cin >> x;
	cout << "Please provide a value for Width" << endl;
	cin >> y;
	cout << "The Area of the Rectangle is " << x*y << endl;
	system("pause");
}