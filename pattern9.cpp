#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=n;i>=1;i--){
		for(int space=1;space<=n-i;space++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<i;
		}
		cout<<endl;
	}
}
