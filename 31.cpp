#include<iostream>
using namespace std;
int main()
{
	int n, sum = 0;
	cout << "Please give me a number" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	cout << "The sum of it all = " << sum<< endl;
	return 0;
}