* * * *
* * *
* *
*



/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=4;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
           printf("*");
        }
        printf("\n");
    }

    return 0;
}
