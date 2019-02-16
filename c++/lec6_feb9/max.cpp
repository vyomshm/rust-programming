#include<iostream>
using namespace std;

int main(int argc, char** argv){
	int arr[] = {40, 50, 70, 90, 2 ,33, -14, 61};
	int max = arr[0];

	for(int i = 0; i < 7; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}

	cout << max << endl;
}