#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv){
	int* p = (int*) malloc(5 * sizeof(int));

	for(int i = 0; i< 5;i++){
		p[i] = i;
	}

	int newsize = 3;

	cout << p << endl;

	p = (int*) realloc(p, newsize * sizeof(int));

	if(p != NULL) {
		cout << p << endl;

		for(int i = 0; i < newsize; i++){
			cout << i[p] << endl;
		}
	} else {
		cout << "Can't realize" << endl;
	}
}