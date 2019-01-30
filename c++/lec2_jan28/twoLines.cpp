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

	if(x1 > x2){
		d = x2;
		x2 = x1;
		x1 = d; 
	}

	if(x3 > x4){
		d = x4;
		x4 = x3;
		x3 = d;
	}

	if(x1 >= x4 || x3 >= x2){
		cout << "No Overlap" << endl;
	} else if(x1 <= x3 && x2 >= x4){
		cout << "L2 is within L1" << endl;
	} else if(x3 <= x1 && x4 >= x2){
		cout << "L1 is within L2" << endl;
	} else {
		cout << "L1 and L2 are overlapping lines" << endl;
	}
}