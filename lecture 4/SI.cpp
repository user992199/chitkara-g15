#include<iostream>
using namespace std;
int main(){

	float p, t;
	// cin>>p>>t;
	p = 105211234566;
	t = 7;
	cout<<p<<" "<<t<<endl;

	float si;

	if(p<=10000){
		si = p*t*10.0/100.0000;
	}
	else{
		si = p*t*15.0/100.0000;
	}

	cout<<si<<endl;

	return 0;
}