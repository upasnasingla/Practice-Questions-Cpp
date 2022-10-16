//removing duplicates from singely ll
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

void removeduplicate(node * &head){
	node *temp=head;
	node *temp1=head;
	while(temp->next!=NULL){
		node *temp1=temp;
		while(temp1->next!=NULL){
			if(temp1->next->data!=temp->data){
				temp1=temp1->next;
			}
			else{
				temp1->next=temp1->next->next;
			}
			
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
	insertAtHead(head,2);
	insertAtHead(head,3);
	insertAtHead(head,1);
	insertAtHead(head,1);
	
    removeduplicate(head);
	display(head);
	
}
