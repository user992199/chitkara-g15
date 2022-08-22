#include<iostream>
using namespace std;
bool check1(int arr[], int n){
	// base case
	if(n==1){
		return true;
	}
	// recursive case
	return check1(arr+1, n-1)&&(arr[0]<=arr[1]);

	// solution using recursive case
	// return chota_ans && (arr[0]<=arr[1]);
	// arr[0] == *arr
	// arr[1] == *(arr + 1)
}
bool check2(int arr[], int n){
	// base case
	if(n==1){
		return true;
	}
	// recursive case
	return check2(arr, n-1)&&(arr[n-2]<=arr[n-1]);

	// solution using recursive case
	// return chota_ans && (arr[0]<=arr[1]);
	// arr[0] == *arr
	// arr[1] == *(arr + 1)
}
bool check3(int arr[], int i, int n){
	// base case
	if(i==n-1){
		return true;
	}
	// recursive case
	return check3(arr, i+1, n)&&(arr[i]<=arr[i+1]);

	// solution using recursive case
	// return chota_ans && (arr[0]<=arr[1]);
	// arr[0] == *arr
	// arr[1] == *(arr + 1)
}
int main(){
	int arr[] = {0, 1, 2, 3, 4, 6, 8};
	int n = sizeof(arr)/sizeof(int);
	if(check3(arr, 0, n)){
		cout<<"sorted\n";
	}else{
		cout<<"not sorted\n";
	}
	return 0;
}