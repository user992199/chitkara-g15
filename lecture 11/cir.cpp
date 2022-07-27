#include<iostream>
using namespace std;
int main(){
	int r = 10;
	int *rptr = NULL;
	rptr = &r;
	cout<<2*3.14*(*rptr)<<endl; // 2 * PI * R
	return 0;
}