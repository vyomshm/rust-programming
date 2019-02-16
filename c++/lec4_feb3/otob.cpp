#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int octal = 0x0;
	int bin = 0;
	int pow = 0x1;
	int r,k;

	cin >> octal;

	while(octal != 0){
		r = octal % 10;
		octal /= 10;

		switch(r){
			case 0:
				k = 000;
				break;
			case 1:
				k = 001;
				break;
			case 2:
				k = 10;
				break;
			case 3:
				k = 11;
				break;
			case 4:
				k = 100;
				break;
			case 5:
				k = 101;
				break;
			case 6:
				k = 110;
				break;
			case 7:
				k = 111;
				break;		
		}
		bin += (k * pow);
		pow *= 1000; 
	}

	cout << bin << endl;

}