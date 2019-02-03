#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int dec = 0;
	int octal = 0;
	int pow = 1;
	int r;
	// cout << "Enter a octal no. :";
	cin >> octal;

	while(octal != 0){
		r = octal % 10;
		octal /= 10;
		dec = dec + r * pow;
		pow *= 8;
	}

	cout << dec << endl;

	// cout << "decimal : "<< dec << endl;
}