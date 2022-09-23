//first last digit
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int first;
	int last;
	last=n%10;
	while(n>=10){
		n=n/10;
	}
	first=n;
	cout<<"first digit is"<< first<<"last digit is"<< last;
	return 0;
}
