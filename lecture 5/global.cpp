#include<iostream>
using namespace std;
// int i = 10;
int main(){
	cout<<i<<endl;
	int i = 9;
	cout<<i<<endl;
	if(i>0){
		int i = 100;
		::i = ::i+1;
		cout<<::i<<endl;
	}
	cout<<i<<endl;
	cout<<::i<<endl;
	return 0;
}