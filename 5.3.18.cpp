#include<iostream>
#include<fstream>
using namespace std;

int main() {
	int a;
	int biggest;
	int smallest;
	ifstream myfile;
	myfile.open("numbers.txt");
	myfile >> smallest;
	myfile >> biggest;
	while (myfile >> a) {
		if (a > biggest)
			biggest = a;
		if (a < smallest)
			smallest = a;
	}
	cout << "The Smallest value is " << smallest << endl;
	cout << "The Biggest value is " << biggest << endl;
}