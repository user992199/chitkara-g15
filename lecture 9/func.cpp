#include<iostream>
using namespace std;


// int a(){
// 	cout<<"a\n";
// 	return 10;
// }

// void a(){
// 	cout<<"a\n";
// 	// return 10;
// }

// int a(){
// 	return 10;
// }

// int z(){
// 	return 7;
// }

int z();

int a(int c, int d){
	int e = z();
	// cout<<c<<" "<<d<<endl;
	cout<<"e: "<<e<<"\n";
	return e;
}

int main(){
	int d = 4;
	int c = 5;
	int i = a(d, c);
	// cout<<i;
	i > 11 ? cout<<"greater than 11\n" : i > 5 ? cout<<"greater than 5 but smaller than 11\n" : cout<< "smaller than 5\n";
	return 0;
}

int z(){
	return 10;
}


// https://hack.codingblocks.com/app/contests/3341


