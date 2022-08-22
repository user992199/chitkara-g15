#include<iostream>
using namespace std;

int sumarr(int *arr, int n){
	// base case
	if(n==1){
		return arr[0];
	}

	// recursive case
	int ans = sumarr(arr+1, n-1);

	// form solution
	return arr[0]+ans;

}

int main(){
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<sumarr(arr, n)<<endl;

	return 0;
}