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
	findmid(head, tail);
	deletefromend(head, tail);
	printlist(head);
	findmid(head, tail);
	printlist(head);

	cout<<"************************\n";

	insertatmid(76, head, tail);

	printlist(head);

	insertatmid(99, head, tail);

	printlist(head);

	deletefrommid(head, tail);

	printlist(head);

	deletefrommid(head, tail);

	printlist(head);

	deletefrommid(head, tail);

	printlist(head);

	deletefrommid(head, tail);

	printlist(head);

	deletefrommid(head, tail);

	printlist(head);

	return 0;
}