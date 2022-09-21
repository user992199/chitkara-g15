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

void printlist(node * &head){
	if(head == NULL){
		cout<<"Linked List is empty\n";
		return;
	}
	node *temp = head;
	while(temp != NULL){
		cout<<temp->data<<" -> ";
		temp = temp->next;
	}cout<<"NULL\n";
}

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

void findmid(node * &head, node * &tail){
	if(head == NULL){
		cout<<"Linked List is already empty\n";
	}else{
		// int count = 0;
		// node * temp = head;
		// while(temp->next!=NULL){
		// 	count++;
		// 	temp = temp -> next;
		// }
		// temp = head;
		// count /= 2;
		// while(count--){
		// 	temp = temp -> next;
		// }
		node * fast = head;
		node * slow = head;
		while(fast->next!=NULL && fast->next->next!=NULL){
			fast = fast->next->next;
			slow = slow->next;
		}
		cout<<"Middle element has value: "<<slow->data<<endl;
	}
}

void insertatmid(int d, node * &head, node *& tail){
	node * temp = new node(d);
	if(head == NULL){
		head = tail = temp;
	}else if(head ==  tail){
		temp -> next = head;
		head = temp;
	}else{
		node * fast = head;
		node * slow = head;
		while(fast->next!=NULL && fast->next->next!=NULL){
			fast = fast->next->next;
			slow = slow->next;
		}
		// cout<<slow->next->data<<endl;
		temp->next = slow->next;
		slow->next = temp;
	}
}

void deletefrommid(node * &head, node *& tail){
	if(head == NULL){
		cout<<"Linked List is already empty\n";
		return;
	}else if(head == tail){
		node * temp = head;
		head = tail = NULL;
		delete temp;
	}else{
		node * prev = head;
		node * fast = head;
		node * slow = head;
		while(fast->next!=NULL && fast->next->next!=NULL){
			prev = slow;
			fast = fast->next->next;
			slow = slow->next;
		}
		if(slow == head){
			head = slow->next;
			delete slow;
		}
		else{
			prev -> next = slow -> next;
			delete slow;	
		}
	}
}

node * merge2sortedll(node* head1, node* head2){
	// base case
	if(head1 == NULL){
		return head2;
	}else if (head2 == NULL){
		return head1;
	}
	// recursive case
	if(head1->data<head2->data){
		head1 -> next = merge2sortedll(head1->next, head2);
		return head1;
	}else{
		head2 -> next = merge2sortedll(head1, head2->next);
		return head2;
	}
}

int main(){
	node * head1 = NULL, * tail1 = NULL;
	node * head2 = NULL, * tail2 = NULL;

	insertatend(5, head1, tail1);
	insertatend(15, head1, tail1);
	insertatend(25, head1, tail1);

	insertatend(10, head2, tail2);
	insertatend(20, head2, tail2);
	insertatend(30, head2, tail2);


	node * head3 = merge2sortedll(head1, head2), tail3 = NULL;

	printlist(head1);
	printlist(head2);
	printlist(head3);

	return 0;
}