#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int x1,x2;
	int x3,x4;

	int d;

	cout << "Enter x1 and x2: \n";
	cin >> x1 >> x2;

	cout << "Enter x3 and x4: \n";
	cin >> x3 >> x4;

	if(x1 < x2){
		d = x2;
		x2 = x1;
		x1 = d; 
	}

	if(x3 < x4){
		d = x4;
		x4 = x3;
		x3 = d;
	}
}