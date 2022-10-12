#include<iostream>
# define arr_size 10
using namespace std;
int a[arr_size];
int front=-1;
int rear=-1;
bool isFull(){
	if(front==0&&rear==arr_size-1){
		return true;
	}
	return false;
}


void enqueque(int element){
	if(isFull()){
		cout<<"Queue is full";
	}
	else{
		if(front==-1){
			front=0;
		}
		rear++;
		a[rear] = element;
        cout << "Inserted " << element << endl;
    

	}
}
int main(){
	enqueque(5);
	enqueque(7);
	enqueque(10);
	enqueque(15);
	enqueque(25);
	return 0;
		
	
}
