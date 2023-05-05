enter radius 
area of circle is = 3.14*2*2=12.56
  circumference of circle is=2*3.14*2=12.56
  
  
 

#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    float a,c,r;
    cout<< "enter radius of cirlce";
    cin>>r;
    a=(3.14*r*r);
    c=(2*3.14*r);
    cout<< " area of cirlce is " << a << " circumference of circle is " << c;

    return 0;
}
