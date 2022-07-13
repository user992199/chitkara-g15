#include<iostream>
using namespace std;
int main(){
	// int ini, fval, step;
	// cin>>ini>>fval>>step;
	// while(ini<=fval){
	// 	int a = (5*(ini-32))/9;
	// 	cout<<ini<<'\t'<<a<<endl;
	// 	ini += step;
	// }





















	int ini, fval, step;
	cin>>ini>>fval>>step;
	for(;ini<=fval;){
		int a = (5*(ini-32))/9;
		cout<<ini<<" "<<a<<endl;
		ini += step;
	}



	return 0;
}