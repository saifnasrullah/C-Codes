#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    int count=0;
    int sum=0;
    cin >> n;
    int b=n;
    int c=n;
    while (c>0)
    {
        c=c/10;
        count=count+1;
    }
    
    while (b>0)
    {
        int d=b%10;
        sum=sum+pow(d,count);
        b=b/10;
    }
    if (sum==n)
    {
        cout << "Armstrong number";
    }
    else
    {
        cout << "Not an Armstrong number";
    }
    
}