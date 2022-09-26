#include<iostream>
#include<stack>
using namespace std;

class queue{
	stack<int> s1;
	stack<int> s2;
public:
	// push 
	void push(int d){
		s1.push(d);
	}

	void pop(){
		if(s1.empty()){
			cout<<"queue is already empty\n";
			return;
		}
		while(!s1.empty()){
			s2.push(s1.top());
			s1.pop();
		}
		cout<<s2.top()<<endl;
		s2.pop();
		while(!s2.empty()){
			s1.push(s2.top());
			s2.pop();
		}
	}

};

// replaces the code in function with the function call
inline void printhello(){
	cout<<"hello world\n";
}



int main(){
	queue q;
	q.push(10);
	q.push(12);
	q.push(14);
	q.push(16);

	q.pop();
	q.pop();
	q.pop();
	q.pop();
	q.pop();

	printhello();

	return 0;
}