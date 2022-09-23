#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
	node(int d){
		data = d;
		next = NULL;
	}
};

void printlist(node* &head){
	if(head == NULL){
		cout<<"Linked List is empty\n";
		return;
	}
	node * temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" -> ";
		temp = temp->next;
	}cout<<"NULL\n";
}

void insertatbegin(int d, node * &head, node * &tail){
	if(head == NULL){
		node * temp = new node(d);
		head = tail = temp;
	}
	else{
		node * temp = new node(d);
		temp->next = head;
		head = temp;
	}
}

void insertatend(int d, node * &head, node * &tail){
	if(tail == NULL){
		node * temp = new node(d);
		head = tail = temp;
	}
	else{
		node * temp = new node(d);
		// temp = tail -> next;
		tail -> next = temp;
		tail = temp;
	}
}

void deletefrombegin(node * &head, node * &tail){
	if(head == NULL){
		return;
	}else if(head == tail){
		delete head;
		// node * temp = head;
		head = tail = NULL;
	}else{
		node *temp = head;
		head = head->next;
		delete temp;
	}
}

void deletefromend(node * &head, node * &tail){
	if(head == NULL){
		return;
	}else if(head == tail){
		delete head;
		// node * temp = head;
		head = tail = NULL;
	}else{
		node *temp = head;
		while(temp->next->next!=NULL){
			temp = temp -> next;
		}
		delete temp->next;
		temp->next = NULL;
		tail = temp;
	}
}

class stack{
	node * head;
	node * tail;
	int stacksize;
public:
	stack(){
		head = tail = NULL;
		stacksize = 0;
	}

	// push
	void push(int d){
		stacksize++;
		insertatbegin(d, head, tail);
	}
	// pop
	void pop(){
		if(head == NULL){
			cout<<"stack is already empty\n";
		}else{
			stacksize--;
			deletefrombegin(head, tail);
		}
	}
	// top
	int top(){
		if(head == NULL){
			cout<<"stack is empty: ";
			return -1;
		}else{
			return head -> data;
		}
	}

	// size
	int size(){
		return stacksize;
	}
	// empty
	bool empty(){
		return stacksize<=0;
	}
};

int main(){
	stack s;
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