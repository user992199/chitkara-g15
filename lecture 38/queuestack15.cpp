#include<iostream>
#include<stack>
using namespace std;

class queue{
	stack<int> s1;
	stack<int> s2;
public:
	void push(int d){
		s1.push(d);
	}
	void pop(){
		if(s1.empty()){
			cout<<"stack is already empty\n";
			return;
		}else{
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
	}
};

int main(){
	queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	q.pop();
	q.pop();
	q.pop();
	q.pop();
	q.pop();
	return 0;
}