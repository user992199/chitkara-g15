#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack <int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	cout<<"size: "<<s.size()<<endl;
	cout<<"is empty: "<<s.empty()<<endl;
	for(int i = 0; i < 5; i++){
		cout<<"top: "<<s.top()<<endl;
		s.pop();
	}

	cout<<"size: "<<s.size()<<endl;
	cout<<"is empty: "<<s.empty()<<endl;
	return 0;
}