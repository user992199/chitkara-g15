#include<iostream>
using namespace std;

void printarr(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}

void bubblesort(int arr[], int n, int i){
	// base case
	if(i == n-1){
		return;
	}

	// recursive case
	for(int j = 0; j < n-i-1; j++){
		if(arr[j]>arr[j+1]){
			swap(arr[j], arr[j+1]);
		}
	}
	bubblesort(arr, n, i+1);
}
void bubblesortcomplete(int arr[], int n, int i, int j){
	// base case
	if(i == n-1){
		return;
	}
	if(j==n-1-i){
		bubblesortcomplete(arr, n, i+1, 0);
		// return;
	}
	else{
		if(arr[j]>arr[j+1]){
			swap(arr[j], arr[j+1]);
		}
		bubblesortcomplete(arr, n, i, j+1);
	}
}
int main(){
	int arr[] = {12, 45, 4621,34, 57, 78,234,2345 };
	int n = sizeof(arr)/sizeof(int);
	bubblesortcomplete(arr, n, 0, 0);
	printarr(arr, n);
	return 0;
}