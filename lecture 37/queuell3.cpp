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
	int queuesize;
public:
	queue(){
		head = tail = NULL;
		queuesize = 0;
	}
	// push
	void push(int d){
		queuesize++;
		insertatend(d, head, tail);
	}
	// pop
	void pop(){
		queuesize--;
		deletefrombegin(head, tail);
	}

	// empty
	bool empty(){
		return head == NULL;
	}
	// front
	int front(){
		if(head == NULL){
			cout<<"queue is empty: ";
			return 0;
		}
		return head->data;
	}
	// back
	int back(){
		if(head == NULL){
			cout<<"queue is empty: ";
			return 0;
		}
		return tail->data;
	}
	// size
	int size(){
		return queuesize;
	}
};

int main(){
	queue q;
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