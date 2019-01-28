#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int a = 39;
	int b = 34;
	int c = 1000;

	if (a >= b && a >= c) {
		cout << "a = " << a << " is the largest" <<endl;
	} else {
		if(b >= c) {
			cout << "b = " << b << " is the largest" <<endl;
		} else {
			cout << "c = " << c << " is the largest" <<endl;
		}
	}
}