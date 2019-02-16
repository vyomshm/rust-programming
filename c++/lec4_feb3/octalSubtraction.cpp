#include<iostream>
using namespace std;
int main(int argc, char** argv) {
	int o1 = 0;
	int o2 = 0;

	cin >> o1 >> o2;

	int diff = 0;
	int borrow = 0;
	int pow = 1;

	while(o1 != 0){
		int r1 = o1 % 10;
		int r2 = o2 % 10;
		o1 /= 10;
		o2 /= 10;

		if(r1 - r2 + borrow < 0){
			r1 += (8 + borrow);
			borrow = -1;
		} else {
			r1 += borrow;
			borrow = 0;
		}

		int d = r1 - r2;

		diff += (d * pow);
		pow *= 10;
	}

	cout << diff << endl;
}