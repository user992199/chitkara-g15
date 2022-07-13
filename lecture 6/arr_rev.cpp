#include <iostream>
using namespace std;
int main(){

	int a[10];
	for(int i = 0; i < 10; i++){
		cin>>a[i];
	}
	cout<<"reverse numbers => ";
	for(int i = 9; i >= 0; i--){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}