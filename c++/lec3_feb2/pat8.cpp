#include <iostream>
using namespace std;

// seen
int main(int argc, char** argv) {
	int n;
	cout << "Rows(should be odd) ?: ";
	cin >> n;

	int stars = 1;
	int spaces = n/2;

	int var = 1;
	for(int r = 0; r < n; r++){
		for(int i = 0; i < spaces; i++){
			cout << " ";
		}

		int safe = var;
		for(int j = 0; j < stars; j++){
			cout << var;
			if(j < stars/2){
				var++;
			} else {
				var--;
			}
		}
		var = safe;

		if(r < (n-1) / 2){
			spaces--;
			stars += 2;
			var++;
		} else {
			spaces++;
			stars -= 2;
			var--;
		}
		cout << endl;
	}
}