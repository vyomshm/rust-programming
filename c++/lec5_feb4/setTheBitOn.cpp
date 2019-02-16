#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int num, k;

	cin >> num >> k;

	int bm = 1 << k;

	if((num & bm) == 0){
		cout << "Bit is Off" << endl;
		num = num | bm;
		cout << num;
	} else {
		cout << "Bit is On!" << endl;
	}
}