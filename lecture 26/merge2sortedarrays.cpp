#include<iostream>
using namespace std;
void printarr(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void merge2sortedarrays(int a1[], int n1, int a2[], int n2){
	int i = 0, j = 0, k = 0;
	int t[1000];
	while(i<n1&&j<n2){
		if(a1[i]<a2[j]){
			t[k] = a1[i];
			i++;
		}else{
			t[k] = a2[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		t[k] = a1[i];
		i++;
		k++;
	}while(j<n2){
		t[k] = a2[j];
		j++;
		k++;
	}
	printarr(t, k);
}
int main(){
	int a1[] = {1, 3, 5, 7, 9};
	int a2[] = {2, 4, 6, 8};
	int n1 = sizeof(a1)/sizeof(int);
	int n2 = sizeof(a2)/sizeof(int);
	merge2sortedarrays(a1, n1, a2, n2);
	return 0;
}