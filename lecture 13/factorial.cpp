#include<iostream>
using namespace std;

void num_print(int arr[], int count){
	for(int i = count; i >= 0; i--){
		cout<<arr[i];
	}cout<<endl;
}

void multiply(int arr[], int i, int &count){
	int product, carry = 0;
	for(int j = 0; j <= count; j++){
		product = arr[j]*i+carry;
		arr[j] = product%10;
		carry = product/10;
	}
	while(carry!=0){
		count++;
		arr[count]=carry%10;
		carry/=10;
	}
}

void factorial(int arr[], int n){
	int count = 0;
	for(int i = 2; i <= n; i++){
		// count = multiply(ans, i, count);
		multiply(arr, i, count);
	}
	num_print(arr, count);
}

int main(){
	int arr[100000] = {1};
	int n;
	cin>>n;
	// n = 5;
	factorial(arr, n);
	return 0;
}