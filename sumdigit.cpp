//sum of digits
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count=0;
	int r;
	while(n!=0){
		r=n%10;
		n=n/10;
		count=count+r;
		
	}
	cout<<"sum of digits are: "<<count;
	return 0;
	
}
