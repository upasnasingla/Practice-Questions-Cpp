//factorial of a no
#include <iostream>
using namespace std;
int factorial(int n){
	if(n==1){
		return 1;
	}
	int prev=factorial(n-1);
	return prev*n;
}
int main(){
	cout<<factorial(5);
}
