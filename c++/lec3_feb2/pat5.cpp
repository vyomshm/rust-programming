#include <iostream>
using namespace std;

// seen
int main(int argc, char** argv) {
	int n;
	cout << "Rows(should be odd) ?: ";
	cin >> n;

	for(int r = 0; r < n; r++){
		for(int c = 0; c < n; c++){
			if(r == c || (r + c) == n - 1){
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}
}