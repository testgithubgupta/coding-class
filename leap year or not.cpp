enter year
2020
year is leap

enter year 
2023
year is not leap year


#include <iostream>

using namespace std;

int main()
{
    int y;
    cout<<" enter  year";
    cin>>y;
    if(((y%4==0) && ( y%100!=0)) || (y%400==0))
    {
        
        cout<<"year is leap";
    }
    else
    {
        cout<<" year is not leap year";
        
    }
    
    return 0;

    
}

