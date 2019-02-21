#include <iostream>
using namespace std;

// correct global ownership // 

int* fun();
int x = 10;

int main(int argc, char** argv) {
	int* p = fun();

	cout << p << endl;
	cout << *p << endl;
}

int* fun() {
	return &x;
}