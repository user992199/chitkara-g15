#include<iostream>
using namespace std;
int firstoccur(int arr[], int n, int key){
	int s = 0, e = n-1;
	int m, ans = -1;
	while(s<=e){
		m = (s+e)/2;
		if(arr[m]==key){
			ans = m;
			e = m-1;
		}else if(arr[m]>key){
			e = m-1;
		}else{
			s = m+1;
		}
	}
	return ans;
}
int lastoccur(int arr[], int n, int key){
	int s = 0, e = n-1;
	int m, ans = -1;
	while(s<=e){
		m = (s+e)/2;
		if(arr[m]==key){
			ans = m;
			s = m+1;
		}else if(arr[m]>key){
			e = m-1;
		}else{
			s = m+1;
		}
	}
	return ans;
}
int main(){-
	int arr[] = {1, 2, 2, 2, 3, 5, 7, 16, 19, 19, 19, 83, 98};
	int n = sizeof(arr)/sizeof(int);
	int key = 2;
	cout<<firstoccur(arr, n, key)<<" "<<lastoccur(arr, n, key)<<endl;
	return 0;
}