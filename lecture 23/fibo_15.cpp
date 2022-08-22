#include<iostream>
using namespace std;
int fibo(int n){
	// base case
	if(n==0||n==1){
		return n;
	}

	// recursive case
	int ans1 = fibo(n-1);
	int ans2 = fibo(n-2);

	// form solution
	return ans1+ans2;
}
int main(){
	int n = 6;
	cout<<fibo(n)<<endl;
	return 0;
}