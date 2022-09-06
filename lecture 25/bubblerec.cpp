#include<iostream>
using namespace std;
void printarr(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}

void bubblesortrecursion(int *arr, int n, int i, int j){
	// base case
	if(i==n-1){
		return;
	}

	if(j==n-1-i){
		bubblesortrecursion(arr, n, i+1, 0);
		return;
	}
	// recursive case
	else{
		if(arr[j]>arr[j+1]){
			swap(arr[j], arr[j+1]);
		}
		bubblesortrecursion(arr, n, i, j+1);
	}
}
int main(){
	int arr[] = {2, 4, 571, 234, 67, 21 ,8, 34};
	int n = 8;
	bubblesortrecursion(arr, n, 0, 0);
	printarr(arr, n);
	return 0;
}