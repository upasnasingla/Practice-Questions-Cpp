//hcf
#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int sum=1;
	int n=2;
    if(n%n+1!=0)
    {
    	continue;
       
	}
	else{
		n=n+1;
	}
	

	   if(a%n==0&&b%n==0){
	   	sum=sum*n;
	   }
	cout<<sum;
	return 0;
}

