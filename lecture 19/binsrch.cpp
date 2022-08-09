#include<iostream>
using namespace std;
int binsrch(int arr[], int n, int key){
	int s = 0, e = n-1;
	while(s<=e){
		int m = (s+e)/2;
		if(arr[m] == key){
			return m;
		}else if(arr[m]>key){
			e=m-1;
		}else{
			s=m+1;
		}
	}
	return -1;
}
int main(){
	int arr[] = {0, 1, 2, 13, 34, 65, 86};
	int n = sizeof(arr)/sizeof(int);
	int key = 65;
	cout<<binsrch(arr, n, key)<<endl;
	return 0;
}