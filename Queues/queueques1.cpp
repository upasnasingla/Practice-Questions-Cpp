#include <iostream>
using namespace std;
int front=-1;
int rear=-1;
int n=6;

int queue[6];

void enqueue(int ele){

	if((front==0 && rear==(n-1))||(rear==(front-1)%(n-1))){
		cout<<"Overflow"<<endl;
		return;
	}
	else if(front==-1){
		front=0;
		rear=0;
		queue[rear]=ele;
	}
	else if(rear==(n-1) && front!=0 ){
		rear=0;
		queue[rear]=ele;
	}
	else{
		rear++;
		queue[rear]=ele;
	}
	
}

void display(){
	if(front==-1){
		cout<<"No element to show"<<endl;
		return;
	}
	else if(front<=rear){
		for(int i=front;i<=rear;i++){
			if(i%2 !=0){
				cout<<queue[i]<<" ";
			}
		}
		
	}
	else{
		for(int i=rear;i<=n-1;i++){
			if(i%2!=0){
				cout<<queue[i]<<" ";
			}
		}
		for(int i=0;i<=rear;i++)
{
	     if(i%2 !=0){
	     	cout<<queue[i]<<" ";
		 }
	}
		}
}
	
int main(){
	
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		enqueue(ele);
	}
	display();
}
