//printing min element from singly ll
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
void minele(node * &head){
	int min=INT_MAX;
	node *temp=head;
	while(temp->next!=NULL){
		if(temp->data<min){
			min=temp->data;
		}
		temp=temp->next;
	}
	cout<<"Min ele is "<<min;
}

int main(){
	insertAtHead(head,4);
	insertAtHead(head,3);
	insertAtHead(head,2);
	insertAtHead(head,3);
	insertAtHead(head,1);
	insertAtHead(head,-5);
	minele(head);
	
	
}
