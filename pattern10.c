1
2 3
4 5 6 
7 8 9 10
  

        

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,cout=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf(" %d ",cout);
        ++cout;
            
        }
       
       printf("\n");
       
    }
    
   return 0;
}












