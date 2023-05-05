

#include <iostream>

using namespace std;

int main()
{  int maths,physics,chemistry,english,A,B,C,D,per,total;
    cout<<" enter marks of maths";
    cin>>maths;
    cout<<"enter marks of physics";
    cin>>physics;
    cout<<"enter marks of  chemistry";
    cin>>chemistry;
    cout<<"enter marks of english";
    cin>>english;
    total=maths+physics+chemistry+english;
    per=total/4;
    cout<< " total marks is " << total << " percentage is " << per;
    
    if(per>90 && per<100)
    {
        cout<< "A";
        
    }
    else if(per>80 && per<90)
    {
        cout<<"B ";
        
    }
    else if(per>60&& per<80)
    {
        cout<<"C";
        
    }
    else if(per<60)
    {
        cout<<" D";
    }
    
    return 0;

    
}
