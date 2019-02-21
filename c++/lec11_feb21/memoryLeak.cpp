#include <iostream>
using namespace std;

void memLeak(int one[], int two[], int n, int m){
	int* p = new int[n+m];

	for(int i = 0; i < n+m; i++){
		p[i] = i< n ? one[i] : two[i - n];
	}

	for(int i = 0; i < n + m; i++){
		cout << p[i] << endl;
	}

	delete[] p;
}

int main(int argc, char** argv){
	int one[5] = {1,2,3,4,5};
	int two[5] = {10,11,12,13,14};

	for(int i = 0; i < 100000000; i++){
		memLeak(one, two, 5, 5);
	}
}