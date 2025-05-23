#include <stdio.h>
int max(int num1,int num2)
{
    int mx;
    if(num1>num2)
    {
         mx=num1;
    }
    else
    {
        mx=num2;
    }
    
}
int main()
{
    int val=max(32,43)+max(23,12);
    printf("%d",val);
}