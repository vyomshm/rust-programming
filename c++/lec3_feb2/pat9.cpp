#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cout << "Rows(should be odd) ?: ";
	cin >> n;

	int stars = 1;
	int spaces = (2 * n) - 3;
	int i;

	for(int r=0; r < n; r++){
		// int c = (2 * n) - 1;
		// cout << "Stars = " << stars << " spaces = " << spaces;

		for(i=1; i<= stars; i++){
			cout << i;
		}

		for(i=1; i<= spaces; i++){
			cout << " ";
		}

		for(i=1; i<= stars; i++){
			cout << i;
		}

		if(r == n-2){
			stars++;
			spaces--;
		} else {
			stars++;
			spaces -= 2;
		}
		cout << endl;
	}
}