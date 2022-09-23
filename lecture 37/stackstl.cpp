#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack <int> s;
	s.push(10);
	s.push(4);
	s.push(1);
	s.push(17);
	s.pop();
	cout<<s.top()<<endl;
	cout<<s.size()<<endl;
	cout<<s.empty()<<endl;
	return 0;
}