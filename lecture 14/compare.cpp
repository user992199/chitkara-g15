#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int no_of_digits(int n){
	int cnt = 0;
	while(n>0){
		cnt++;
		n /= 10;
	}
	return cnt;
}

bool compare(int a, int b){
	return a*pow(10, no_of_digits(b))+b>b*pow(10, no_of_digits(a))+a;
}

void printa(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<"";
	}cout<<endl;
}

int main(){
	int arr[] = {321, 4532, 67, 234, 89, 34};
	int n = sizeof(arr)/sizeof(int);
	sort(arr, arr+n, compare);
	printa(arr, n);
	return 0;
}