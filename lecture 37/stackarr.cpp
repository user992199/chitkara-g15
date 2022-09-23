#include<iostream>
using namespace std;

template <typename type> 
class stack{
	type * arr;
	int counter;
	int sizestack;
public:
	stack(int s){
		sizestack = s;
		arr = new type[s];
		counter = -1;
	}

	// push
	bool push(type d){
		if(counter >= sizestack-1){
			cout<<"stack is full\n";
			return false;
		}else{
			arr[++counter] = d;
			return true;
		}
	}

	// pop
	void pop(){
		if(counter < 0){
			cout<<"stack is already empty\n";
			return;
		}else{
			counter--;
			return;
		}
	}

	// top
	type top(){
		if(counter<0){
			cout<<"stack is empty\n";
			return (type)0;
		}else{
			return arr[counter];
		}
	}

	// empty
	bool empty(){
		return counter < 0;
	}

	// full
	bool full(){
		return counter>=sizestack-1;
	}

	// size
	int size(){
		return counter+1;
	}
};

int main(){
	stack <char> s(10);
	s.push('1');
	s.push('2');
	s.push('3');
	s.push('4');
	s.push('5');
	s.push('5');
	s.push('5');
	s.push('5');
	s.push('5');
	// s.push('5');
	cout<<"size: "<<s.size()<<endl;
	cout<<"full: "<<s.full()<<endl;
	cout<<"empty: "<<s.empty()<<endl;

	cout<<s.top()<<endl;
	s.pop();
	cout<<"size: "<<s.size()<<endl;
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;
	s.pop();

	return 0;
}