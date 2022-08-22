#include<iostream>
using namespace std;
int fact(int n){
	// base case
	if(n==0){
		return 1;
	}

	// recursive case
	return n * fact(n-1);

	// forming solution using base case and recursive case
	// return n*ans;

}
int main(){
	int n = 6;
	cout<<fact(n)<<endl;
	return 0;
}