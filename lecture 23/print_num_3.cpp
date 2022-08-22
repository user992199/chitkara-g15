#include<iostream>
using namespace std;
void printnat(int n){
	// base case
	if(n==0){
		return;
	}
	// recursive case
	printnat(n-1);
	cout<<n<<" ";
	return;
}
int main(){
	int n = 10;
	printnat(n);
	return 0;
}