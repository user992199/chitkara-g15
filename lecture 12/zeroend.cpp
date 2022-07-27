#include <iostream>
using namespace std;

void printa(int arr[], int n){
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}cout<<endl;
}

int main(){
	int arr[] = {3, 1, 4, 0, 0, 10, 8, 0, 11};
	int n = sizeof(arr)/sizeof(int);
	int zero = 0;
	for(int i = 0; i < n; i++){
		if(arr[i]!= 0){ //  5 3
			swap(arr[zero], arr[i]); // 5 3
			nz++; // 5 4
		}
	}
	printa(arr, n);
	return 0;
}