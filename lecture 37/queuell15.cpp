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

class queue{
	node * head;
	node * tail;
	int qs;
public:
	queue(){
		head = tail = NULL;
		qs = 0;
	}

	// push
	void push(int d){
		qs++;
		insertatend(d, head, tail);
	}
	// pop
	void pop(){
		qs ? qs-- : qs = 0;
		deletefrombegin(head, tail);
	}
	// front
	int front(){
		return head != NULL ? head -> data : -1;
	}
	// back
	int back(){
		return tail != NULL ? tail -> data : -1;
	}
	// empty
	bool empty(){
		return qs <= 0;
	}
	// size
	int size(){
		return qs;
	}

};

int main(){
	queue q;
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