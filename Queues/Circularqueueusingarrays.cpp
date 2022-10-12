//implementing circular queue using arrays
#include <iostream>
using namespace std;
int rear=-1;
int front=-1;
int size=5;
int queue[5];

void enqueue(int ele){

	if((front==0 && rear==(size-1))||(rear==(front-1)%(size-1))){
		cout<<"Overflow"<<endl;
		return;
	}
	else if(front==-1){
		front=0;
		rear=0;
		queue[rear]=ele;
	}
	else if(rear==(size-1) && front!=0 ){
		rear=0;
		queue[rear]=ele;
	}
	else{
		rear++;
		queue[rear]=ele;
	}
	
}

void dequeue(){
	if(front==-1){
		cout<<"Underflow"<<endl;
		return;
	}
	int dele_ele=queue[front];
	if(front==rear){
		front=-1;
	}
	else if(front==(size-1)){
		front=0;
	}
	else{
		front++;
	}
	
	
}

void display(){
	if(front==-1){
		cout<<"No element to show"<<endl;
		return;
	}
	if(front<=rear){
		for(int i=front;i<=rear;i++){
			cout<<queue[i]<<" ";
			
		}
	}
	else{
		for(int i=front;i<=size-1;i++){
			cout<<queue[i]<<" ";
		}
		for(int i=0;i<=rear;i++){
			cout<<queue[i]<<" ";
		}
	}
	
}
int main(){
	enqueue(1);
	enqueue(2);
	enqueue(3);
	dequeue();
	display();
}
