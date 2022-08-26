#include<iostream>
using namespace std;
void printarr(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void merge2sortedarrays(int a[], int s, int e){
	int m = (s+e)/2;
	int n1 = m+1, n2 = e+1;
	int i = s, j = m+1, k = s;
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
	for(int x = s; x <= e; x++){
		a[x] = t[x];
	}
}
void mergesort(int a[], int s, int e){
	// base case
	if(s>=e){
		return;
	}
	// recursive case
	int m = (s+e)/2;
	mergesort(a, s, m);
	mergesort(a, m+1, e);
	merge2sortedarrays(a, s, e);
}
int main(){
	int a[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int n = sizeof(a)/sizeof(int);
	printarr(a, n);
	mergesort(a, 0, n-1);
	printarr(a, n);
	return 0;
}