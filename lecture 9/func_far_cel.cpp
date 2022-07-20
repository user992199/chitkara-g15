#include <iostream>
using namespace std;

void far_cel(){
	int ini, fval, step;
	cin>>ini>>fval>>step;
	for(;ini<=fval;){
		int a = (5*(ini-32))/9;
		cout<<ini<<" "<<a<<endl;
		ini += step;
	}
}

int main(){
	for(int i = 0; i < 3; i++){
		far_cel();
	}
	// far_cel();
}