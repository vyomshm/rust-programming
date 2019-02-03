#include <iostream>
using namespace std;

// seen
int main(int argc, char** argv) {
	int n;
	cout << "Rows(should be odd) ?: ";
	cin >> n;

	int stars = 1;
	int spaces = n/2;
	for(int r = 0; r < n; r++){
		for(int i = 0; i < spaces; i++){
			cout << " ";
		}

		for(int j = 0; j < stars; j++){
			cout << "*";
		}

		if(r < (n-1)/2){
			spaces--;
			stars += 2;
		} else {
			spaces++;
			stars -= 2;
		}
		cout << endl;
	}
}