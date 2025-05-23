#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count=0;
    int sum=0;
    int d=0;
    while (n>0)
    {
        d=n%10;
        sum=sum*10+d;
        n=n/10;
    }
    cout << sum;

}