#include<iostream>
#include <climits>
using namespace std;

int main(int argc, char** argv) {
	char a;
	cin >> a;

	if(a >= 'A' && a <= 'Z'){
		cout << "Upper case" << endl;
		char lc = 'a' + (a - 'A');
		cout << lc << endl;
	} else if(a >= 'a' && a <= 'z') {
		cout << "Lower Case" << endl;
		char uc = 'A' + (a - 'a');
		cout << uc << endl;
	} else {
		cout << "invalid input" << endl;
	}
} 