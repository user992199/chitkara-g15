#include<iostream>
using namespace std;
string movexatend(string str){
	// base case
	if(str.length() == 0){
		return str;
	}
	// recursive case
	string curr_char = str.substr(0, 1);
	string choti_string = movexatend(str.substr(1));
	if(curr_char == "x"){
		return choti_string + curr_char; // "dxxx" + "x"
	}else{
		return curr_char + choti_string; // "d" + "xx"
	}
}
int main(){
	string str = "abxbcxxcxdxx";
	cout<<str<<endl;
	cout<<movexatend(str)<<endl;
	return 0;
}