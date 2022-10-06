#include <iostream>
#include <stack>
#include <math.h>
using namespace std;
int postfixExpression(string s){
	stack<int> st;
	for(int i=0;i<s.length();i++){
		if(s[i]>='0' && s[i]<='9'){
			st.push(s[i]-'0');    //passed as character so no - ascii value of 0 will give int
		}
		else{
			int opr2=st.top();
			st.pop();
			int opr1=st.top();
			st.pop();
			
			switch(s[i]){
				case '+':
					st.push(opr1+opr2);
					break;
				case '-':
					st.push(opr1-opr2);
					break;
				case '*':
					st.push(opr1*opr2);
					break;
				case '/':
					st.push(opr1/opr2);
					break;
				case '^':
					st.push(pow(opr1,opr2));
					break;
					
			}
			
					}
					
	}
	return st.top();

}
int main(){
	cout<<postfixExpression("46+2/5*7+");
	return 0;
}
