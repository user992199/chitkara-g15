#include <iostream>
using namespace std;

void printa(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}

void update(int arr[], int n){
	for(int i = 1; i < n; i++){
		arr[i] += arr[i-1];
	}
	printa(arr, n);
	return;
}

int main(){
	int arr[10] = {1};
	int n = sizeof(arr)/sizeof(int);
	update(arr, n);
	update(arr, n);
	update(arr, n);
	update(arr, n);
	printa(arr, n);
	return 0;
}