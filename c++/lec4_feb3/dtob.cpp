#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int dec = 0;
	int bin = 0;
	int pow = 1;
	int r;
	// cout << "Enter a decimal no. :";
	cin >> dec;

	while(dec != 0){
		r = dec % 2;
		dec /= 2;
		bin = bin + r * pow;
		pow *= 10;
	}

	cout << bin;
	// cout << "bin : "<< bin << endl;
}