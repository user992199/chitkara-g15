#include<iostream>
using namespace std;
string movexatend(string str){
	// base case
	if(str.length() == 0){
		return str;
	}
	// recursive case
	if(str.substr(0, 2) == "pi"){
		return "3.14" + movexatend(str.substr(2)); // "dxxx" + "x"
	}else{
		return str.substr(0, 1) + movexatend(str.substr(1)); // "d" + "xx"
	}
}
int main(){
	string str = "abpibxypipip";
	cout<<str<<endl;
	cout<<movexatend(str)<<endl;
	return 0;
}