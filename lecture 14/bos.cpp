#include<iostream>
using namespace std;

int sumofdigit(int n){
	int cnt = 0;
	while(n>0){
		cnt += n %10;
		n /= 10;
	}
	return cnt;
}

int main(){
	int n;
	// cin>>n;
	n = 17;
	int tempno = n;
	int sumprimefac = 0;
	while(n%2 == 0){
		n /= 2;
		sumprimefac += 2;
	}
	for(int i = 3; i*i < n; i+=2){
		while(n%i==0){
			sumprimefac+=sumofdigit(i);
			n/=i;
		}
	} 
	if(n>1){
		sumprimefac+=sumofdigit(n);
	}
	if(sumprimefac == sumofdigit(tempno) and tempno != n){
		cout<<1<<endl;
	}
	else{
		cout<<0<<endl;
	}
	return 0;
}