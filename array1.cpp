//adding element at index 0
#include <iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter size of array :  \n";
	cin>>size;
	int elements,i;
	for(i=0;i<size;i++){
		cout<<"Enter arr["<<i<<"] Element : \n";
		cin>>elements;
		
	}
	size+=1;
	int arr[size];
	for(i=size;i>0;i++){
	    arr[i]=arr[i]+1;
		
	}
	int value;
	cin>>value;
	arr[0]=value;
	for(i=0;i<size;i++){
		cout<<" " <<arr[i]<<" ";
	}
	
	
	
}
