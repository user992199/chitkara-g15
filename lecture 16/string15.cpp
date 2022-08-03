#include<iostream>
#include<cstring>
using namespace std;
int main(){
	// //           01234
	// string s1 = "abcde";
	// // cin>>s1;
	// // getline(cin, s1);
	// string s2 = "hello";
	// cout<<s1+s2<<endl;
	// // cout<<s3<<endl;
	// cout<<s1<<endl;
	// cout<<s2<<endl;
	// // s1 = s1.substr(2, 3);
	// cout<<s1<<endl;
	// cout<<"s1"<<endl;
	// //           01234
	// string s1 = "abcde";
	// string s2 = "ab";
	// cout<<s1<<endl;
	// cout<<s2<<endl;
	// s1>s2 ? cout<<"s1\n" : cout<<"s2\n";
	string s1 = "abcde";
	string s2 = "gh";
	// string s3 = s1-s2;
	// cout<<s3<<endl;
	// cout<<s1.length()<<endl;
	// cout<<s1.size()<<endl;
	s1.pop_back();
	cout<<s1<<endl;
	// s1.push_back('$');
	s1 += '$';
	cout<<s1<<endl;
	return 0;
}