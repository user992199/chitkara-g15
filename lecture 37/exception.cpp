#include<iostream>
using namespace std;
int main(){
	// int n = 0;
	// int k = 0;
	// try {
	// 	if (n == 0){
	// 		// throw 'a';
	// 		throw "abc";
	// 		cout<<"below throw\n";
	// 	}
	// 	k = 10/n;
	// }
	// catch(char a){
	// 	cout<<"exception with char parameter\n";
	// }
	// catch(int x){
	// 	cout<<"exception caught\n";
	// 	cout<<"n = 0\n";
	// }
	// catch(...){
	// 	cout<<"default catch\n";
	// }
	int n = 0;
	int k = 0;
	try{
		if(n == 0){
			try{
				if(k == 0){
					throw k;
				}
			}
			catch(int l){
				cout<<"inside inner catch\n";
				throw l;
			}
			cout<<"out of inner catch\n";
		}
	}
	catch(int x){
		cout<<"inside outer interger catch\n";
	}
	catch(...){
		cout<<"inside outer catch\n";
	}
	cout<<"out of outer catch\n";
	return 0;
}