#include<iostream>
using namespace std;
class queue{
	int f;
	int b;
	int * arr;
	int queuesize;
public:
	queue(int s){
		queuesize = s;
		arr = new int[queuesize];
		f = b = -1;
	}

	// push
	bool push(int d){
		if(b >= queuesize-1){
			cout<<"queue is already full\n";
			return false;
		}else{
			if(f == -1){
				f++;
			}
			arr[++b] = d;
			return true;
		}
	}
	// pop
	void pop(){
		if(f == -1){
			cout<<"queue is already empty\n";
		}else{
			for(int i = 1; i <= b; i++){
				arr[i-1] = arr[i];
			}
			b--;
			if(b==-1){
				f = -1;
			}
		}
	}
	// empty
	bool empty(){
		return f == -1;
	}
	// full
	bool full(){
		return b >= queuesize-1;
	}
	// size
	int size(){
		return b+1;
	}
	// front
	int front(){
		if(f==-1){
			cout<<"queue is empty: ";
			return -1;
		}
		return arr[f];
	}
	// back
	int back(){
		if(f==-1){
			cout<<"queue is empty: ";
			return -1;
		}
		return arr[b];
	}
};
int main(){
	queue q(10);
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	cout<<"size: "<<q.size()<<endl;
	for(int i = 0; i < 6; i++){
		cout<<"front: "<<q.front()<<endl;
		cout<<"back: "<<q.back()<<endl;
		q.pop();
	}
	cout<<"size: "<<q.size()<<endl;
	return 0;
}