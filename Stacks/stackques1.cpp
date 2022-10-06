//print elements at even position in stack
#include <iostream>
#include <stack>
using namespace std;
int main(){
	int n;
	cin>>n;   //size of stack
	int ele;
	stack<int>s;
	for(int i=1;i<=n;i++){
		cin>>ele;
		s.push(ele);
	}
	stack<int>s2;
	
	for(int i=1;i<=n;i++){
		int a=s.top();
		if(i%2!=0){
			s2.push(a);
		}
		s.pop();
	}
	while(!s2.empty()){
	    int a=s2.top();
	    s.push(a);
	    s2.pop();
	}
	while(!s.empty()){
		int a=s.top();
		cout<<a<<" ";
		s.pop();
	}
  return 0;	
}
