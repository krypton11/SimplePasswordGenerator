#include "string"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
static const char alphanum[] = 
"0123456789"
"%$#@(*%)^:;!"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int stringLength = sizeof(alphanum) - 1;

char alpha () {
	return alphanum[rand() % stringLength];
}


int main(int argc, char** argv) {
	srand(time(0));
	int n;
	ofstream pass;
	pass.open("password.txt");
	cout << "Enter numbers password: ";
	cin >> n;
	
	for (int e = 0; e < n; e++) {
		cout << "\n";
		for (int i = 0; i < 3; i++) {
			for (int z = 0; z < 5; z++)
			{
				cout << alpha();
				pass << alpha() << endl;
			}
		}
	}
	pass.close();
	cout << "\n" << "Passwords has been saved in passwords.txt";
	return 0;
}
