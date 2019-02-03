#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cout << "Rows? ";
	cin >> n;

	int i1 = 0;
	int i2 = 1;
	int i3;

	for(int r = 0; r < n; r++){
		for(int c = 1; c <= r; c++){
			cout << i1 << "\t";
			i3 = i1 + i2;
			i1 = i2;
			i2 = i3;
			
		}
		cout << endl;
	}
}