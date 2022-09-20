#include<iostream>
using namespace std;
class node{
public:
	int data;
	node * next;
	node(int d){
		data = d;
		next = NULL;
	}
};

void insertatbegin(int d, node * &head, node * &tail){
	node * temp = new node(d);
	if(head == NULL){
		head = tail = temp;
	}else{
		// (*temp).next = head;
		temp->next = head;
		head = temp;
	}
}

void insertatend(int d, node * &head, node * &tail){
	node * temp = new node(d);
	if(head == NULL){
		head = tail = temp;
	}else{
		// (*temp).next = head;
		tail->next = temp;
		tail = temp;
	}
}

void deletefrombegin(node * &head, node * &tail){
	if(head == NULL){
		cout<<"Linked List is already empty\n";
	}else if(head == tail){
		node * temp = head;
		head = tail = NULL;
		delete temp;
	}else{
		node * temp = head;
		head = head -> next;
		delete temp;
	}
}

void deletefromend(node * &head, node * &tail){
	if(head == NULL){
		cout<<"Linked List is already empty\n";
	}else if(head == tail){
		node * temp = head;
		head = tail = NULL;
		delete temp;
	}else{
		node * temp = head;
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		temp->next = NULL;
		delete tail;
		tail = temp;
	}
}

void printlist(node * &head){
	node *temp = head;
	while(temp != NULL){
		cout<<temp->data<<" -> ";
		temp = temp->next;
	}cout<<"NULL\n";
}

int main(){
	node * head = NULL, * tail = NULL;

	insertatbegin(10, head, tail);
	insertatbegin(20, head, tail);
	insertatbegin(30, head, tail);

	printlist(head);

	insertatend(45, head, tail);
	insertatend(55, head, tail);
	insertatend(65, head, tail);

	printlist(head);

	deletefrombegin(head, tail);

	printlist(head);

	deletefromend(head, tail);

	printlist(head);

	return 0;
}