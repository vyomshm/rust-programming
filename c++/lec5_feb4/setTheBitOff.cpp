#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int num, k;

	cin >> num >> k;

	int bm = 1 << k;

	if((num | bm) == num){
		cout << "Bit is On" << endl;
		// num = num ^ bm;
		bm = ~bm;
		num = num & 
		cout << num << endl;
	} else {
		cout << "Bit is Off!" << endl;
	}
}