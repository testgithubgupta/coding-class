
enter two number
3 4
  swapping number is 4 3
  
  
  
  /******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b,t;
    cout<<" enter two number ";
    cin>>a;
    cin>>b;
    t=a;
    a=b;
    b=t;
    cout<<" swapping number is->  " << a  <<   b;

    return 0;
}

