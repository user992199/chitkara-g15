#include<iostream>
using namespace std;

class stack{
	int * arr;
	int top1;
	int top2;
	int stacksize;
public:
	stack(int s){
		arr = new int[s];
		top1 = -1;
		top2 = s;
		stacksize = s;
	}

	bool push(int sn, int d){
		if(top1<top2-1){
			if(sn==1){
				arr[++top1] = d;
			}else{
				arr[--top2] = d;
			}
			return true;
		}else{
			cout<<"Stack Overflow\n";
			return false;
		}
	}
	void pop(int sn){
		if(sn==1){
			if(top1<0){
				cout<<"Stack is already empty\n";
			}else{
				cout<<arr[top1--]<<endl;
			}
		}else{
			if(top2>=stacksize){
				cout<<"Stack is already empty\n";
			}else{
				cout<<arr[top2++]<<endl;
			}
		}
	}
	int top(int sn){
		if(sn==1){
			if(top1<0){
				cout<<"Stack is already empty\n";
				return -1;
			}else{
				return arr[top1];
			}
		}else{
			if(top2>=stacksize){
				cout<<"Stack is already empty\n";
				return -1;
			}else{
				return arr[top2];
			}
		}		
	}
};

int main(){
	stack s(5);
	s.push(1, 1);
	s.push(1, 2);
	s.push(1, 3);
	s.push(2, 10);
	s.push(2, 20);
	cout<<"-------------------------\n";
	cout<<s.top(1)<<endl;
	cout<<s.top(1)<<endl;
	cout<<s.top(2)<<endl;
	cout<<s.top(2)<<endl;
	cout<<"-------------------------\n";
	s.pop(1);
	s.pop(2);
	s.pop(1);
	s.pop(2);
	s.pop(1);
	s.pop(2);
	s.pop(1);

}