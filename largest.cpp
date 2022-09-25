//largest among three no's

#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b&&a>c)
    {
       cout<<a <<" A is greatest";
    }
    else if(b>a&&b>c)
    {
      cout<<b<<" B is greatest";  
    }
    else{
        cout <<c<<" C is greatest ";
    }
}
