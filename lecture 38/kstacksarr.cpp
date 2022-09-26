#include<iostream>
using namespace std;
class stack{
	int * arr;
	int * counter;
	int * next;
	int freespace;
	int stacksize;
	int num_stacks;
public:
	stack(int n, int k){
		arr = new int[n];
		counter = new int[k];
		next = new int[n];
		stacksize = n;
		num_stacks = k;
		freespace = 0;
		for(int i = 0; i < k; i++){
			counter[i] = -1;
		}
		for(int i = 0; i < n-1; i++){
			next[i] = i+1;
		}
		next[n-1] = -1;
	}

	void push(int sn, int d){
		if(freespace == -1){
			cout<<"Stack Overflow\n";
			return;
		}
		// find freespace
		int ind = freespace;

		// update freespace
		freespace = next[ind];

		// insert element
		arr[ind] = d;

		// update prev
		next[ind] = counter[sn-1];

		// update top
		counter[sn-1] = ind;
	}

	void pop(int sn){
		if(counter[sn-1] == -1){
			cout<<"Stack is already empty\n";
			return;
		}

		// find index of top of stack
		int ind = counter[sn-1];

		// update top
		counter[sn-1] = next[ind];

		// print popped element
		cout<<arr[ind]<<endl;

		// update next freespace
		next[ind] = freespace;

		// update freespace
		freespace = ind;

		// finish

	}
};
int main(){
	stack s(10, 5);

	s.push(1, 1);
	s.push(1, 2);
	s.push(1, 3);
	s.push(1, 4);
	s.push(1, 5);
	s.push(2, 10);
	s.push(2, 11);
	s.push(3, 100);
	s.push(4, 1000);
	s.push(5, 10000);

	s.push(4, 1001);

	cout<<"1: ";s.pop(1);cout<<endl;
	cout<<"1: ";s.pop(1);cout<<endl;
	cout<<"1: ";s.pop(1);cout<<endl;
	cout<<"1: ";s.pop(1);cout<<endl;
	cout<<"1: ";s.pop(1);cout<<endl;
	cout<<"1: ";s.pop(1);cout<<endl;

	cout<<"2: ";s.pop(2);cout<<endl;

	s.push(1, 1);
	s.push(1, 2);
	s.push(1, 3);
	s.push(1, 4);
	s.push(1, 5);
	s.push(1, 6);

	cout<<"1: ";s.pop(1);cout<<endl;
	cout<<"1: ";s.pop(1);cout<<endl;
	cout<<"1: ";s.pop(1);cout<<endl;
	cout<<"1: ";s.pop(1);cout<<endl;
	cout<<"1: ";s.pop(1);cout<<endl;
	cout<<"1: ";s.pop(1);cout<<endl;

	cout<<"2: ";s.pop(2);cout<<endl;
	cout<<"5: ";s.pop(5);cout<<endl;
	cout<<"3: ";s.pop(3);cout<<endl;
	cout<<"4: ";s.pop(4);cout<<endl;


	return 0;
}