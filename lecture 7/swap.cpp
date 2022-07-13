#include <iostream>
using namespace std;
int main(){
	int a = 10, b = 15;
	cout<<a<<" "<<b<<endl;
	// int temp = a;
	// a = b;
	// b = temp;
	// a = a+b;
	// b = a-b;
	// a = a-b;
	// b = (a+b) - (a=b);
	swap(a, b);
	cout<<a<<" "<<b<<endl;

	return 0;
}