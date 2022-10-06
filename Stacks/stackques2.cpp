//given a stack, reverse the first half of elements, put it back into stack and return it
#include <iostream>
#include <stack>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int ele;
	stack<int>s2;
	for(int i=1;i<=n;i++){
		cin>>ele;
		arr[i]=ele;
		
	}
	for(int i=1;i<=n/2;i++){
		s2.push(arr[i]);
	}
	for(int i=n;i>=(n/2)+1;i--){
		s2.push(arr[i]);
		
	}
	while(!s2.empty()){
		int a=s2.top();
		cout<<a<<" ";
		s2.pop();
	}
}

