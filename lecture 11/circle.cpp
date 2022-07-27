#include <iostream>
using namespace std;
int main(){
	int r = 7;
	int *rptr = 0;
	rptr = &r;
	cout<<2 * 3.14 * (*rptr)<<endl;
	return 0;
}