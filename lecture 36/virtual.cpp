#include<iostream>
using namespace std;
class node{
public:
	void print(){
		cout<<"Parent Class\n";
	}
};
class node2: public node{
public:
	void print(){
		cout<<"Child Class\n";
	}
};

void func(node2 * p){
	p->print();
}

int main(){
	node * parent = new node();
	node2 * child = new node2();
	cout<<"____________________Compile Time Polymorphism____________________\n";
	parent->print();
	child->print();
	cout<<"____________________Runtime Polymorphism____________________\n";
	func(parent);
	func(child);
	return 0;
}