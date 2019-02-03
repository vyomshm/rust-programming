#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int dec = 0;
	int bin = 0;
	int pow = 1;
	int r;
	// cout << "Enter a binary no. :";
	cin >> bin;

	while(bin != 0){
		r = bin % 10;
		bin /= 10;
		dec = dec + r * pow;
		pow *= 2;
	}

	cout << dec;
	// cout << "decimal : "<< dec << endl;
}