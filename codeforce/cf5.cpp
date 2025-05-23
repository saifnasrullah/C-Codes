#include <iostream>
using namespace std;
int main()
    {
        int ul,ll;
        int count=0;
        cin >> ul >> ll;
        int c[ul];
        for (int i =0 ; i <ul ; i++)
        {
            scanf("%d",&c[i]);
        }
        int ch=c[ll-1];
        for (int i =0 ; i <ul ; i++)
            {
                if (c[i]>=ch && c[i]>0)
                {
                    count=count+1;
                }

            }
        cout << count;

    }
