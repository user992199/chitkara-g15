#include<iostream>
using namespace std;
template <typename T>
class stack{
	T * arr;
	int counter;
	int stacksize;
public:
	stack(int c){
		stacksize = c;
		arr = new T[c];
		counter = -1;
	}

	// push
	bool push(int d){
		if(counter >= stacksize-1){
			cout<<"stack is already full\n";
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
		}else{
			counter--;
		}
	}
	// empty
	bool empty(){
		return counter<0;
	}
	// top
	T top(){
		if(counter<0){
			cout<<"stack is empty ";
		}else{
			return arr[counter];
		}
	}
	// size
	int size(){
		return counter+1;
	}
};
int main(){
	stack <int> s(10);
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	cout<<"size: "<<s.size()<<endl;
	cout<<"is empty: "<<s.empty()<<endl;
	for(int i = 0; i < 6; i++){
		cout<<"top: "<<s.top()<<endl;
		s.pop();
	}

	cout<<"size: "<<s.size()<<endl;
	cout<<"is empty: "<<s.empty()<<endl;
	return 0;
}