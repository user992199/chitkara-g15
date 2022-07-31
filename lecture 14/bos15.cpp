#include<iostream>
#include <climits>
using namespace std;

int sumofdigits(int n){
	int c = 0;
	while(n>0){
		c += n%10;
		n/=10;
	}
	return c;
}

int main(){

	int n = 17, sumf = 0;
	int tempn = n;

	while(n%2==0){
		sumf += 2;
		n/=2;
	}

	for(int i = 3; i*i < n; i+=2){
		// cout<<i<<endl;
		while(n%i==0){
			n/=i;
			sumf += sumofdigits(i);
		}
	}
	// cout<<n<<endl;
	if(n>1){
		if(tempn != n){
			sumf += sumofdigits(n);
		}
		// n = 1;
	// cout<<"*\n";
	}
	
	if(sumf == sumofdigits(tempn)){
		cout<<"boston"<<endl;
	}
	else{
		cout<<"not boston"<<endl;
	}

	return 0;
}