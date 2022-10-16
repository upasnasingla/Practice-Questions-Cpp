//calculate n raised to power of p
#include <iostream>
using namespace std;
int mul(int n,int p){
	if(p==0){
		return 1;
	}
	int prevmul=mul(n,p-1);
	return prevmul*n;
}
int main(){
	cout<<mul(4,2);
}
