#include <iostream>
using namespace std;
int main(){
	int min;
	int no1,no2;
	int i=1;
	int gcd=1;
	cin>>no1>>no2;
	min=(no1<no2)?no1:no2;
	if(no2%no1==0){
		gcd=no1;
	}
	else if(no1%no2==0){
		gcd=no2;
	}
	else{
		if(no1%i==0 && no2%i==0){
			gcd=gcd*i;
		}
		i++;
	}
	cout<<gcd;
	return 0;
}
