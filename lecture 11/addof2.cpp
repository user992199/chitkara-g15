#include <iostream>
using namespace std;
int main(){
	int a = 10;
	// cout<<sizeof(&a)<<endl;
	double d = 10.123;
	float f = 12312.123;
	// cout<<sizeof(&d)<<endl;
	// cout<<sizeof(&f)<<endl;
	int *aptr, *bptr;
	aptr = &a;
	cout<<aptr<<endl;
	double * dptr = &d;
	cout<<dptr<<endl;

	cout<<*aptr<<endl;
	*aptr += 50;
	cout<<a<<endl;
	cout<<*(&a)<<endl;
	cout<<aptr<<endl;
	cout<<aptr+1<<endl;
	cout<<dptr<<endl;
	cout<<dptr+1<<endl;
	// cout<<(void *)dptr+1<<endl;

	// void * vptr = dptr;
	// cout<<*(double *)vptr<<endl;
	char ch1 = 'A';
	char ch2 = 'i';
	char ch3 = '&';

	cout<<ch1<<endl;
	cout<<&ch1<<endl;
	cout<<(int *)&ch1<<endl;
	cout<<*(int *)&ch1<<endl;
	cout<<(char)*(int *)&ch1<<endl;
	// cout<<&ch2<<endl;
	// cout<<&ch3<<endl;



	return 0;
}