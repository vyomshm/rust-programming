#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cout << "Rows? ";
	cin >> n;

	int i = 1;
	for(int r = 0; r < n; r++){
		for(int c = 1; c <= r; c++){
			cout << i << "\t";
			i++;
		}
		cout << endl;
	}
}