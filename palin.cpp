//palindrome or not
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int num;
	num=n;
	int rev=0;
	int rem;
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(num==rev){
		cout<<"palindrome";
	}
	else{
		cout<<"not a palindrome";
	}
	return 0;
}
