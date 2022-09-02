#include<iostream>
#include<cstring>
using namespace std;
string movexatend(string s){
	// base case
	if(s.length() <= 1){
		return s;
	}

	// recursive case
	string cc = s.substr(0, 2);
	string cs = s.substr(2);
	if(cc == "pi"){
		return "3.14" + movexatend(cs);
	}else{
		return s.substr(0, 1) + movexatend(s.substr(1));
	}

}
int main(){
	string s = "apixpi";
	cout<<movexatend(s)<<endl;
	return 0;
}