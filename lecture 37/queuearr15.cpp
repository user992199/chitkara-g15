#include<iostream>
using namespace std;
class queue{
	int * arr;
	int f;
	int l;
	int queuesize;
public:
	queue(int s){
		queuesize = s;
		arr = new int[s];
		f = l = -1;
	}
	// push
	bool push(int d){
		if(f < 0){
			f++;
		}else if(l >= queuesize-1){
			cout<<"queue is already full\n";
			return false;
		}
		arr[++l] = d;
		return true;
	}
	// pop
	void pop(){
		if(f < 0){
			cout<<"queue is already empty\n";
			return;
		}
		for(int i = 1; i <= l; i++){
			arr[i-1] = arr[i];
		}
		l--;
		if(l<0){
			f--;
		}
	}
	// empty
	bool empty(){
		return f<0;
	}
	// front
	int front(){
		return f >= 0 ? arr[f] : -1 ;
	}
	// back
	int back(){
		return l >= 0 ? arr[l] : -1 ;
	}

	// size
	int size(){
		return l+1;
	}
};
int main(){
	queue q(10);
	cout<<"is empty: "<<q.empty()<<endl;
	cout<<"size: "<<q.size()<<endl;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	cout<<"is empty: "<<q.empty()<<endl;
	cout<<"size: "<<q.size()<<endl;
	for(int i = 0; i < 6; i++){
		cout<<"front: "<<q.front();
		cout<<" :- back: "<<q.back()<<endl;
		q.pop();
	}
	cout<<"is empty: "<<q.empty()<<endl;
	cout<<"size: "<<q.size()<<endl;
	return 0;
}