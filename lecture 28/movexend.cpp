#include<iostream>
#include<cstring>
using namespace std;
string movexatend(string s){
	// base case
	if(s.length() <= 1){
		return s;
	}

	// recursive case
	string cc = s.substr(0, 1);
	string cs = s.substr(1);
	if(cc == "x"){
		return movexatend(cs) + cc;
	}else{
		return cc + movexatend(cs);
	}

}
int main(){
	string s = "axbxxxbxxxcxx";
	cout<<movexatend(s)<<endl;
	return 0;
}