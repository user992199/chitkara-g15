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

	~node(){
		cout<<"inside destructor\n";
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

void findmid(node * &head, node * &tail){
	// int count = 0;
	// node *temp = head;
	// while(temp->next != NULL){
	// 	count++;
	// 	temp = temp->next;
	// }
	// count/=2;
	// temp = head;
	// while(count--){
	// 	temp = temp->next;
	// }
	// cout<<temp->data<<endl;
	if(head == NULL){
		cout<<"Linked List is empty\n";
		return;
	}
	else if(head == tail){
		cout<<head->data<<endl;
	}
	else{
		node * fast = head;
		node * slow = head;
		while(fast->next!=NULL && fast->next->next != NULL){
			slow = slow->next;
			fast = fast->next->next;
		}
		cout<<slow->data<<endl;	
	}
}

void insertatmid(int d, node * &head, node * &tail){
	if(head == NULL){
		node * temp = new node(d);
		head = tail = temp;
	}else if(head == tail){
		node * temp = new node(d);
		temp->next = head;
		head = temp;
	}
	else{
		node * fast = head;
		node * slow = head;
		while(fast->next!=NULL && fast->next->next != NULL){
			slow = slow->next;
			fast = fast->next->next;
		}
		node * temp = new node(d);
		temp->next = slow->next;
		slow->next = temp;
	}
}

void deleteatmid(node * &head, node *& tail){
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
	node *head, *tail;
	head = tail = NULL;

	insertatbegin(10, head, tail);	
	insertatbegin(20, head, tail);	
	insertatbegin(30, head, tail);

	// printlist(head);

	insertatend(15, head, tail);	
	insertatend(25, head, tail);	
	insertatend(35, head, tail);

	// printlist(head);

	deletefromend(head, tail);
	printlist(head);

	// findmid(head, tail);

	insertatmid(99, head, tail);
	insertatmid(91, head, tail);

	printlist(head);

	deleteatmid(head, tail);
	deleteatmid(head, tail);
	deleteatmid(head, tail);
	deleteatmid(head, tail);
	deleteatmid(head, tail);
	deleteatmid(head, tail);
	deleteatmid(head, tail);

	printlist(head);

	return 0;
}