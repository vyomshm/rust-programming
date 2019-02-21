#include <iostream>
using namespace std;

// wrong ownership // 

int* fun();

int main(int argc, char** argv) {
	int* p = fun();

	cout << p << endl;
	cout << *p << endl;
}

int* fun() {
	int x = 10;
	return &x;
}