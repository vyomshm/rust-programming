#include<iostream>
using namespace std;
int main(int argc, char** argv) {
	int o1 = 0;
	int o2 = 0;

	cin >> o1 >> o2;

	int total = 0;
	int carry = 0;
	int pow = 1;

	while(o1 !=0 || o2 != 0 || carry != 0){
		int r1 = o1 % 10;
		int r2 = o2 % 10;
		o1 /= 10;
		o2 /= 10;

		int sum = carry + r1 + r2;

		int d = sum % 8;
		carry = sum / 8;

		total += (pow * d);
		pow *= 10;	
	}
	cout << total << endl;
}