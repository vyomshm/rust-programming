#include <iostream>
using namespace std;

// correct static ownership // 

int* fun();

int main(int argc, char** argv) {
	int* p = fun();

	cout << p << endl;
	cout << *p << endl;
}

int* fun() {
	static int x = 10;
	return &x;
}