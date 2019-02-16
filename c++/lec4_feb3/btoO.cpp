#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int octal = 0;
	int bin = 0;
	int pow = 1;
	int r,k;

	cin >> bin;

	while(bin != 0){
		r = bin % 1000;
		bin /= 1000;

		switch(r){
			case 0:
				k = 0;
				break;
			case 1:
				k = 1;
				break;
			case 10:
				k = 2;
				break;
			case 11:
				k = 3;
				break;
			case 100:
				k = 4;
				break;
			case 101:
				k = 5;
				break;
			case 110:
				k = 6;
				break;
			case 111:
				k = 7;
				break;		
		}

		octal += (k * pow);
		pow *= 10;
	}

	cout << octal << endl;
}