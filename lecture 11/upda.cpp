#include <iostream>
using namespace std;

void update(int * g){
	*g += *g *3;
	cout<<&g<<endl;
}

int main(){
	int r = 7;
	// cout<<r<<endl;
	int *rptr = &r;
	update(rptr);
	cout<<&rptr<<endl;
	// cout<<r<<endl;
	return 0;
}