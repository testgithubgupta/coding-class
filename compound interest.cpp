

#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    float p,r,t,ci;
    cout<<" enter principal rate and time";
    cin>>p;
    cin>>r;
    cin>>t;
    ci=p*pow((1+r/100),t) -p; 
    cout<< "compound interest is " << ci;

    return 0;
}

enter principal rate and time
1000
2
4
compound interst is 82.432
