#include<iostream>
using namespace std;
int pokedamage(int y, int m, int z, int t, int n, int g, int a, int b, int x);

int main() {
	cout << pokedamage(1, 1, 1, 1, 1, 1, 1, 1, 1) << endl;

}
int pokedamage(int y, int m, int z, int t, int n, int g, int a, int b, int x) {
	int num;
	num = (((((((2 * x / 5 + 2)*(y*m)*z) / (a*b)) / 50) + 2)*t*n*g) / 100);
	cout << "Damage done is " << endl;
	return num;
}