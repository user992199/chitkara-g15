#include<iostream>
using namespace std;

// void up(int *arr, int n){
// 	n = sizeof(arr)/sizeof(int);
// 	for(int i = 0; i < n; i++){
// 		*(arr+i) += 5;
// 	}
// }

int main(){
	int k = 10;
	void *kptr = &k;

	cout<<kptr<<endl;
	// cout<<*kptr<<endl;
	// int a[] = {3214, 345, 35,6, 345, 234, 2345, 234, 23};
	// int n = sizeof(a)/sizeof(int);
	// cout<<a<<endl;
	// cout<<*a<<endl;
	// cout<<a+1<<endl;
	// cout<<*(a+1)<<endl;
	// up(a, n);
	// for(int i = 0; i < n; i++){
	// 	cout<<*(a + i)<<" ";
	// }
	return 0;
}