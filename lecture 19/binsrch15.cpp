#include<iostream>
using namespace std;
int main(){
	int arr[] = {0, 2, 5, 8, 9, 10, 21};
	int n = sizeof(arr)/sizeof(int);
	int s = 0, e = n-1;
	int key = 21;
	int m;
	while(s<=e){
		m = (s+e)/2;
		if(arr[m]==key){
			// cout<<m<<endl;
			break;
		}else if(arr[m]>key){
			e = m-1;
		}else{
			s = m+1;
		}
	}
	cout<<m<<endl;
	return 0;
}