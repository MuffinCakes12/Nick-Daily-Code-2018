#include<iostream>
#include<ctime>
#include<string>
#include<fstream>
using namespace std;
char input = 'y';
string adj[]{ "Bitter","Lemon-Flavored","Fluffy","Screeching","Lil","Slick","Shaky","Blobby","Historical","Teeny","Ancient","Gabby","Jaunty","Vivacious","Tawdry", "Testy", "Wacky", "Old" };
string noun[]{ "Mount Kilimanjaro","Violin","flock","religion","tablecloth","Bench","Fish","Banana","Bortnite","pigtails","milk","Flipper","pen","Spoop" };
int main() 
{
	ifstream InFile;
	ifstream OutFile;
	char input;
	string SavedNames;
	InFile.open("SavedNames.txt");
	//OutFile << "SavedNames.txt";
	InFile >> SavedNames;
	InFile.close();
	OutFile.close();

	srand(time(NULL));
	cout << "Would you like to see your previous names?" << endl;
	cin >> input;
	if (input == 'y')
		cout << "Your previous names were " << SavedNames  << endl;
	while(input!='q'){
	cout << "Do you want to know your Rap name?" << endl;
	while (input == 'y') {
		cin >> input;

		int ad = rand() % 15;
		int nouns = rand() % 10;
		cout << adj[ad] << endl;
		cout << noun[nouns] << endl;
	}
	}
}

