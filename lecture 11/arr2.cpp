#include <iostream>
using namespace std;

void printa(int *arr, int n){
	// int n = sizeof(arr)/sizeof(int);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}

void inp(int *arr, int n){
	for(int i = 0; i < n; i++){
		// cin>>arr[i];
		cin>>*(arr + i);
	}
}

void update(int * g){
	*g += *g *3;
	cout<<&g<<endl;
}

int main(){
	int arr[] = {312, 654, 85, 234, 67, 234, 78 ,435};
	int n = sizeof(arr)/sizeof(int);
	// for(int i = 0; i < n; i++){
	// 	cout<<*(arr+i)<<" ";
	// }cout<<endl;
	// for(int i = 0; i < n; i++){
	// 	cout<<arr[i]<<" ";
	// }cout<<endl;
	// cout<<&arr[0]<<endl;
	printa(arr, n);
	inp(arr, n);
	printa(arr, n);
	return 0;
}