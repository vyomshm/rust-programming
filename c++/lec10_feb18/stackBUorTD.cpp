#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int x = 10;
	int y = 20;

	cout << &x << endl;
	cout << &y < endl;

	if(&y - &x > 0){
		cout << "Bottom up";
	} else {
		cout << "Top Down";
	}

	cout << endl;
}