#include<iostream>
using namespace std;

void printnum(int n){
	// base case
	if(n==0){
		return;
	}

	// recursive case
	printnum(n-1);
	cout<<n<<" ";
}

int main(){
	int n = 10;
	printnum(n);
	return 0;
}