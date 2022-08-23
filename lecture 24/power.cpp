#include<iostream>
using namespace std;
int power(int n, int x){
	// base case
	if(x==0){
		return 1;
	}

	// recursive case
	int ans = power(n, x-1);

	// form solution
	return n*ans;
}
int main(){
	int n = 3;
	int x = 3;
	cout<<power(n, x)<<endl;
	return 0;
}