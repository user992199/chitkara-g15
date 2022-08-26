#include<iostream>
using namespace std;
void printarr(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void merge2sortedarrays(int a[], int s, int e){
	int m = (s+e)/2;
	int i = s, j = m+1, k = s;
	int n1 = m+1, n2 = e+1;
	int t[1000];
	while(i<n1&&j<n2){
		if(a[i]<a[j]){
			t[k] = a[i];
			i++;
		}else{
			t[k] = a[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		t[k] = a[i];
		i++;
		k++;
	}while(j<n2){
		t[k] = a[j];
		j++;
		k++;
	}
	// 3, 4, 1, 2
	// 1, 2, 3, 4
	for(int x = s; x <= e; x++){ // 3, 4, 1, 2
		a[x] = t[x];
	}
}
void mergesort(int a[], int s, int e){
	// base case
	if(s>=e){
		return;
	}
	// recursive case
	int m = (s+e)/2; // (0+7)/2 => 3
	//                     0, 1, 2, 3
	mergesort(a, s, m); // 4, 3, 2, 1
	// 						4	5	6	7
	mergesort(a, m+1, e);// -1, -2, -3, -4
	// merging & sorting the divided arrays
	merge2sortedarrays(a, s, e);
}
int main(){
	int arr[] = {4, 3, 2, 1, -1, -2, -3, -4};
	int n = sizeof(arr)/sizeof(int);
	printarr(arr, n);
	mergesort(arr, 0, n-1);
	printarr(arr, n);
	return 0;
}