#include <iostream>
using namespace std;

void update(int &c, int &d){
	c += 10; // 20
	d += c; // 40
	// cout<<a<<" "<<b<<endl;
	// if(b>a){
	// 	return;
	// }
	// cout<<"outside";
	return;
}

int main(){
	int a = 10, &b = a;
	cout<<a<<" "<<b<<endl;// 10 10
	update(a, b);
	cout<<a<<" "<<b<<endl; // 
	update(a, b);
	cout<<a<<" "<<b<<endl;
	return 0;
}