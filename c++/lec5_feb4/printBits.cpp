#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int num;
	cin >> num;

	for(int i = 31; i >= 0; i--) {
		int bm = 1 << i;
		cout << (((num & bm) == 0) ? 0 : 1);
	}
	cout << endl;
}
