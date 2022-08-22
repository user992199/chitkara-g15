#include<iostream>
using namespace std;

bool check1(int *arr, int n){
	// base case
	if(n==1){
		return true;
	}

	// recursive case
	bool ans = check1(arr+1, n-1);

	// form solution
	// arr[i] == *(arr+i)
	return ans&&arr[0]<=arr[1];

}

bool check2(int *arr, int n){
	// base case
	if(n==1){
		return true;
	}

	// recursive case
	bool ans = check2(arr, n-1);

	// form solution
	// arr[i] == *(arr+i)
	return ans&&arr[n-2]<=arr[n-1];

}

bool check3(int *arr,int i, int n){
	// base case
	if(i==n){
		return true;
	}

	// recursive case
	bool ans = check3(arr, i+1, n);

	// form solution
	// arr[i] == *(arr+i)
	return ans&&arr[i-1]<=arr[i];

}
int main(){
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	if(check3(arr, 1, n)){
		cout<<"sorted\n";
	}else{
		cout<<"not sorted\n";
	}

	return 0;
}