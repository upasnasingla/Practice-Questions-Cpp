#include <iostream>
using namespace std;
int front=-1;
int rear=-1;
int n=10;
int q[10];

void enqueue(int ele){

	if((front==0 && rear==(n-1))||(rear==(front-1)%(n-1))){
		cout<<"Overflow"<<endl;
		return;
	}
	else if(front==-1){
		front=0;
		rear=0;
		q[rear]=ele;
	}
	else if(rear==(n-1) && front!=0 ){
		rear=0;
		q[rear]=ele;
	}
	else{
		rear++;
		q[rear]=ele;
	}
	
}

void display(){
	int k=0;
	int min=INT_MAX;
	if(front==-1){
		cout<<"Underflow"<<endl;
		return;
	}
	else if(front<=rear){
		for(int i=front;i<=rear;i++){
			if(q[i]<min){
				min=q[i];
			}
			if(k%2!=0){
				cout<<"Min upto "<<k<<" is "<<min<<endl;
				
			}
			k++;
		}
		
		
	}
	else{
		for(int i=front;i<n;i++){
			if(q[i]<min){
				min=q[i];
			}
			if (k % 2 != 0)
                {
                    cout << " Min Element upto " << k << " is " << min << endl;
                }
                k++;
		}
		for (int i = 0; i <= rear; i++)
            {
                if (q[i] < min)
                {
                    min = q[i];
                }
                if (k % 2 != 0)
                {
                    cout << " Min Element upto " << k << " is " << min << endl;
                }
                k++;
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
