#include <iostream>
using namespace std;
class node{
	public:
	  int data;
	 node *next;
	 
	 node(int val){
	 	data=val;
	 	next=NULL;
	 }
};
node *head=NULL;
void insertAtHead(node * &head,int val){
	node *n=new node(val);
	n->next=head;
	head=n;
}

void insertNewNode(node * & head,int val){
	
	node *temp=head;
	node *n=new node(val);
	while(temp->next!=NULL){
		if(temp->next->data>val){
			n->next=temp->next;
			temp->next=n;
			return;
		}
		temp=temp->next;
	}
}
void display(node *head){
	node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL";
	
}
int main(){
	insertAtHead(head,4);
	insertAtHead(head,3);
	insertAtHead(head,1);
	insertNewNode(head,2);
	display(head);
	return 0;
}
