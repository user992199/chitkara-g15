#include<iostream>
using namespace std;
void printm2sa(int a1[], int n1, int a2[], int n2){
	int t[10000] = {0};
	int i = 0, j = 0, k = 0;
	while(i<n1&&j<n2){
		if(a1[i]<a2[j]){
			t[k] = a1[i];
			i++;
		}else{
			t[k] = a2[j];
			j++;
		}k++;
	}while(j<n2){
		t[k] = a2[j];
		j++;
		k++;
	}while(i<n1){
		t[k] = a1[i];
		i++;
		k++;
	}
	for(int x = 0; x < k; x++){
		cout<<t[x]<<" ";
	}cout<<'\n';
}
int main(){
	int a1[] = {0, 2, 4, 6, 8, 10};
	int a2[] ={1, 3, 5};
	int n1 = sizeof(a1)/sizeof(int);
	int n2 = sizeof(a2)/sizeof(int);
	printm2sa(a1, n1, a2, n2);
}