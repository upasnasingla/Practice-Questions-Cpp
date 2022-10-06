#include <iostream>
#include <stack>
using namespace std;
bool isempty(string s){
	int n=s.size();
	stack <char> st;
	bool ans=true;
	for(int i=0;i<n;i++){
		if(s[i]=='{'||s[i]=='['||s[i]=='('){
			st.push(s[i]);
		}
		else if(s[i]==')'){
			if(!st.empty() && st.top()=='('){
				st.pop();
			}
			else{
				ans=false;
				break;
				exit(0);
			}
		}
		else if(s[i]=='}'){
			if(!st.empty() &&st.top()=='{'){
				st.pop();
			}
			else{
				ans=false;
				break;
				exit(0);
			}
		}
		
		else if(s[i]==']'){
			if(!st.empty() &&st.top()=='['){
				st.pop();
			}
			else{
				ans=false;
				break;
				exit(0);
			}
		}
	}
	if(!st.empty()){
		return false;
		
	}
	return ans;
}
int main(){
	string s="{[()]}";
	if(isempty(s)){
		cout<<"Balanced";
	}
	else{
		cout<<"Not balanced";
	}
	return 0;
}
