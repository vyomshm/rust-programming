#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int dec = 0;
	int octal = 0;
	int pow = 1;
	int r;
	// cout << "Enter a decimal no. :";
	cin >> dec;

	while(dec != 0){
		r = dec % 8;
		dec /= 8;
		octal = octal + r * pow;
		pow *= 10;
	}

	cout << octal << endl;
	// cout << "octal : "<< octal << endl;
}