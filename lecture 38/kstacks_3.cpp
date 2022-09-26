#include<iostream>
using namespace std;

class stack{
	int * arr;
	int * counter;
	int * next;
	int sizestack;
	int freespace;
public:
	stack(int s, int k){
		sizestack = s;
		arr = new int[s];
		counter = new int[k];
		next = new int[s];
		freespace = 0;
		for(int i = 0; i < k; i++){
			counter[i] = -1;
		}
		for(int i = 0; i < s-1; i++){
			next[i] = i+1;
		}
		next[s-1] = -1;
	}

	// push
	bool push(int sn, int d){
		if(freespace < 0){
			cout<<"Stack Overflow\n";
			return false;
		}
		// find freespace
		int ind = freespace;

		// update freespace
		freespace = next[ind];

		// insert the element
		arr[ind] = d;

		//  update next 
		next[ind] = counter[sn-1];

		// update top
		counter[sn-1] = ind;
		return true;
	}

	// pop
	void pop(int sn){
		if(counter[sn-1] < 0){
			cout<<"Stack is empty\n";
			return;
		}
		// find top
		int ind = counter[sn-1];

		// update top
		counter[sn-1] = next[ind];

		// update next freespace
		next[ind] = freespace;

		// update freespace
		freespace = ind;
	}

	// top
	int top(int sn){
		if(counter[sn-1]<0){
			return -1;
		}else{
			return arr[counter[sn-1]];
		}
	}
};

int main(){
	stack s(10, 5);
	s.push(1, 10);
	s.push(1, 11);
	s.push(1, 12);
	s.push(1, 13);
	s.push(2, 20);
	s.push(2, 21);
	s.push(3, 30);
	s.push(4, 40);
	s.push(5, 50);


	for(int i = 0; i < 4; i++){
		cout<<"stack 1 top: "<<s.top(1)<<endl;
		s.pop(1);
	}
	for(int i = 0; i < 2; i++){
		cout<<"stack 2 top: "<<s.top(2)<<endl;
		s.pop(2);
	}
		cout<<"stack 3 top: "<<s.top(3)<<endl;
		cout<<"stack 4 top: "<<s.top(4)<<endl;
		cout<<"stack 5 top: "<<s.top(5)<<endl;

	return 0;
}
