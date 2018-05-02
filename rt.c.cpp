//Matt, Nick, 5/2/18, Daily Code
#include<iostream>
#include<string>

using namespace std;
void print_menu();
void religion(int x);
double celsius(double);
int main() {
	int x;
	char input = 'a';//dummy value
	//only prints once
	print_menu();

	while (input != 'q') {
		cout << "command:";
		cin >> input;
		switch (input) {
		case 'h':
			print_menu();
			break;
		case 't':
			cout << "input temperature in Fahrenheit" << endl;
			cin >> x;
			cout<<celsius(x)<<endl;
			break;
		case 'r':
			cout << "Give Value for Religion 1-10?" << endl;
			cin >> x;
			religion(x);
			break;
		case 'q':
			cout << "winners never quit - matt" << endl;
			return 0;
		}
	}
}
void print_menu() {
	cout << "h: help" << endl;
	cout << " q: quit" << endl;
	cout << "t: temperature" << endl;
	cout << "r: religion" << endl;
	
}

void religion(int x) {

	switch (x) {
	case 1:
		cout << "Christianity	31.2%" << endl;
		break;

	case 2:
		cout << "Islam	24.1 %" << endl;
		break;
	case 3:
		cout << "Secular / Nonreligious / Agnostic / Atheist	16 %" << endl;
		break;
	case 4:
		cout << "Hinduism	15.1 %" << endl;
		break;
	case 5:
		cout << "Buddhism	 6.9 %" << endl;
		break;
	case 6:
		cout << "Chinese traditional religion	 5.50 %" << endl;
		break;
	case 7:
		cout << "Ethnic religions	 4.19 %" << endl;
		break;
	case 8:
		cout << "African traditional religions	 1.40 %" << endl;
		break;
	case 9:
		cout << "Sikhism	 0.32 %" << endl;
		break;
	case 10:
		cout << "Spiritism	 0.21% " << endl;
		break;
	default:// dumb user input
			cout<<"Can't find information for this religion" << endl;
			
	}
}
double celsius(double x) {

double C = (x - 32) / (9 / 5);
	return C;
}


