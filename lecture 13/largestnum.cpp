#include<iostream>
#include<cmath>
using namespace std;

int no_of_digits(int a){
	int num = 0;
	while(a>0){
		a/=10;
		num++;
	}
	return num;
}

bool compare(int a, int b){
	return a*pow(10, no_of_digits(b))+b > b*pow(10, no_of_digits(a))+a;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin>>arr[i];
	}

	sort(arr, arr+n, compare);


	for (int i = 0; i < n; i++){
		cout<<arr[i];
	}cout<<endl;

}