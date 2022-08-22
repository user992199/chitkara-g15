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

	// solution using base case and recursive case
	return ans1+ans2;

}
int main(){
	int n = 25;
	cout<<fibo(n)<<endl;
	return 0;
}