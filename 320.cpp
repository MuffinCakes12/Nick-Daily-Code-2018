#include<iostream>
#include<ctime>
using namespace std;

void MinecraftEnemy();
int main() {
	srand(time(NULL));
		while (1) {
			MinecraftEnemy();
			system("pause");
		}
}
void MinecraftEnemy() {
	int num = rand() % 100 + 1;
	if (num < 30)
		cout << "s" << endl;
	else if (num < 80)
		cout << "c" << endl;
	else if (num < 100)
		cout << "z" << endl;
}