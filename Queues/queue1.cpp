#include <iostream>
using namespace std;
# define n 50
class queue{
	int *arr;
	int back;
	int front;
	
	public:
		queue(){
		
		arr=new int[n];
		back=-1;
		front=-1;
	}
	void enqueue(int x){
		if(back==n-1){
			cout<<"Queue overflow"<<endl;
			return;
			
		}
		if(front==-1){
			front++;
		}
		back++;
		arr[back]=x;
		
		
	}
	
	void dequeue(){
		if(front==-1 ||front>back){
			cout<<"Underflow"<<endl;
		}
		int topvalue=arr[front];
		front++;
		cout<<topvalue<<endl;
		
	}
	
	void peek(){
		if(front==-1 ||front>back){
			cout<<"Empty"<<endl;
			return;
		}
		
		cout<<arr[front];
	}
	
	bool empty(){
		if(front==-1 ||front>back){
			cout<<"True"<<endl;
		}
		else{
			cout<<"False"<<endl;
		}
	}
};
int main(){
	queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.dequeue();
	q.peek();
	q.dequeue();
	q.dequeue();
    q.peek();
	q.empty();
	
}
