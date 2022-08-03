#include<iostream>
#include<string>
using namespace std;
int main(){
	// string S1;
	// cin>>S1;
	// char arr1[100], arr2[100];
	// cin.get(arr1, 100);
	// cin.ignore();
	// cin.getline(arr2, 100);
	// cout<<arr1<<endl;
	// cout<<arr2<<endl;
	// getline(cin, S1);
	// int n = S1.size();
	// int n1 = S1.size();
	// int n2 = S1.length();
	// cout<<S1<<endl;
	// cout<<n1<<endl;
	// cout<<n2<<endl;
	// string s1, s2;
	// cin.ignore();
	// getline(cin, s1);
	// cin.ignore();
	// getline(cin, s2);
	// cout<<s1<<endl<<s2<<endl;
	string s1 = "abcdefghijklmnopqrstuvwxyz", s2 = "ab";
	// condition ? task if condition is true : task if condition is false;
	s1 > s2 ? cout<<"s1\n" : cout<<"s2\n";
	s1 = s1.substr(4, 7);
	cout<<s1<<endl;
	s1.pop_back();
	cout<<s1<<endl;
	s1.push_back('$');
	cout<<s1<<endl;
	return 0;
}