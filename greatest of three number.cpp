enter three number
3
4
5
5
  
 

#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<" enter three number";
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c)
    {
        cout<<a;
        
    }
    else if (b>c && b>a)
    {
        cout<<b;
    }
    else
    {
        cout<<c;
    }

    return 0;
}

  
