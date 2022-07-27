#include <iostream>
using namespace std;
int main(){
	// int a = 10;
	// cout<<a<<endl;
	// cout<<&a<<endl;
	// // int &b = a;
	// // cout<<&b<<endl;
	// double d = 10.23;
	// float f = 324.34;
	// cout<<&d<<endl;
	// cout<<&f<<endl;

	// cout<<sizeof(a)<<endl;
	// cout<<sizeof(d)<<endl;
	// cout<<sizeof(f)<<endl;

	// cout<<sizeof(&a)<<endl;
	// cout<<sizeof(&d)<<endl;
	// cout<<sizeof(&f)<<endl;

	// int* aptr, *bptr, *cptr;
	// int b = 87, c = 39;
	// bptr = &b;
	// cptr = &c;
	// aptr = &a;
	// cout<<&a<<endl;
	// cout<<aptr<<endl;
	// cout<<bptr<<endl;
	// cout<<cptr<<endl;
	// cout<<sizeof(aptr)<<endl;

	// char ch1 = 'a';
	// cout<<&ch1<<endl;
	// char ch2 = 'b';
	// cout<<&ch2<<endl;
	// char ch3 = 'c';
	// cout<<&ch3<<endl;
	// char ch4 = 'U';
	// cout<<&ch4<<endl;

	// cout<<(void *)&ch1<<endl;

	int a = 10;
	int *aptr = &a;
	cout<<aptr<<endl;
	cout<<*aptr<<endl;
	*aptr += *aptr;
	cout<<*aptr<<endl;
	cout<<*(&a)<<endl;

	cout<<aptr<<endl;
	cout<<*(aptr+2)<<endl;

	double d = 219.422;
	double *dptr = &d;
	cout<<dptr<<endl;
	cout<<dptr+1<<endl;

	cout<<aptr<<endl;

	// void * vd = (void *)aptr;




	return 0;
}