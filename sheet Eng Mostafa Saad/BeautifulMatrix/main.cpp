#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,r,c, ans=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>x;
            if(x==1)
            {
                r=i;
                c=j;
            }
            else
                continue;
        }
    }
        cout <<abs(r-3)+abs(c-3)<< endl;
}
