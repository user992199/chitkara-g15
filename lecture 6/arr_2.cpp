#include <iostream>
using namespace std;
int main(){

	int a[] = {1, 32, 54, 786, 9, 23, 65};
	int n = sizeof(a)/sizeof(int);
	// for(int i = 0; i < 10; i++){
	// 	cin>>a[i];
	// }
	// cout<<"reverse numbers => ";
	for(int i = 0; i < n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}