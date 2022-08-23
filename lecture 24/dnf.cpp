#include<iostream>
using namespace std;
void printarr(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<"\n";
}
int main(){
	int arr[] = {0, 1, 2, 0, 1, 2, 1, 0, 2, 2, 1, 0, 0, 1};
	int n = sizeof(arr)/sizeof(int);
	int l = 0, m = 0, h = n-1;
	while(m<=h){		
		if(arr[m] == 0){
			swap(arr[m], arr[l]);
			l++;
			m++;
		}else if(arr[m] == 2){
			swap(arr[m], arr[h]);
			h--;
		}else{
			m++;
		}
	}
	printarr(arr, n);
	return 0;
}