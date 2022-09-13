#include<iostream>
using namespace std;
int main(){
	int n = 10000;
	int a = 0;
	for(int i = 0; i < 5; i++){
		a += i;
	}
	int k = 100000;
	for (i=0; i<=n-1; i++){
	   for (j=i+1; j<=k; j++){
	       a+=j
	   }
	}
	cout<<a<<endl;
	return 0;
}