#include <iostream>
using namespace std;
int main(){
	// char ch;
	// cin>>ch;
	// if(ch>='A'&&ch<='Z'){
	// 	cout<<"Uppercase";
	// }
	// else if(ch>='a'&&ch<='z'){
	// 	cout<<"lowercase";
	// }
	// else{
	// 	cout<<"invalid";
	// }
	// if(isupper(ch)){
	// 	cout<<"Uppercase";
	// }
	// else if(islower(ch)){
	// 	cout<<"lowercase";
	// }
	// else{
	// 	cout<<"invalid";
	// }









	char ch;
	cin>>ch;
	// if(ch>='a'&&ch<='z'){
	// 	cout<<"ch is lowercase";
	// }
	// else if(ch>='A'&&ch<='Z'){
	// 	cout<<"ch is Uppercase";
	// }
	// else{
	// 	cout<<"invalid";
	// }
	if(islower(ch)){
		cout<<"ch is lowercase";
	}
	else if(isupper(ch)){
		cout<<"ch is Uppercase";
	}
	else{
		cout<<"invalid";
	}













	return 0;
}