#include<iostream>
using namespace std;

class stack{
	int * arr;
	int counter1;
	int counter2;
	int sizestack;
public:
	stack(int s){
		sizestack = s;
		arr = new int[s];
		counter1 = -1;
		counter2 = s;
	}

	// push
	bool push(int sn, int d){
		if(counter1 < counter2-1){
			if(sn == 1){
				arr[++counter1] = d;
			}else{
				arr[--counter2] = d;
			}
			return true;
		}else{
			cout<<"Stack Overflown\n";
			return false;
		}
	}

	// pop
	void pop(int sn){
		if(sn == 1){
			if(counter1<0){
				cout<<"Stack is already empty\n";
			}else{
				counter1--;
			}
		}else{
			if(counter2>=sizestack){
				cout<<"Stack is already empty\n";
			}else{
				counter2++;
			}
		}
	}

	// top
	int top(int sn){
		if(sn == 1){
			if(counter1<0){
				cout<<"stack is empty\n";
				return -1;
			}else{
				return arr[counter1];
			}
		}else{
			if(counter2>=sizestack){
				cout<<"stack is empty\n";
				return -1;
			}else{
				return arr[counter2];
			}	
		}
	}

	// empty
	bool empty(int sn){
		if(sn==1){
			return counter1 < 0;
		}else{
			return counter2 >= sizestack;
		}
	}

	// full
	bool full(){
		return counter1 >= counter2-1;
	}

	// size
	int size(int sn){
		if(sn==1){
			return counter1 + 1 ;
		}else{
			return sizestack - counter2;
		}
	}
};

int main(){
	stack s(6);
	s.push(1, 5);
	s.push(1, 6);
	s.push(1, 7);
	s.push(1, 8);
	s.push(2, 99);
	s.push(2, 98);

	s.push(1, 17);

	for(int i = 0; i < 2; i++){
		cout<<"stack 2 top: "<<s.top(2)<<endl;
		s.pop(2);
	}
	s.push(1, 17);
	for(int i = 0; i < 6; i++){
		cout<<"stack 1 top: "<<s.top(1)<<endl;
		s.pop(1);
	}
	return 0;
}