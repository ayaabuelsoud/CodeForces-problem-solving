#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,h,ai ,ans=0;
    cin>> n >>h;
    for(int i=0; i<n;i++)
    {
        cin>>ai;
        if(ai<h || ai==h)
            {ans++;}
        else
            {ans+=2;}
    }
    cout<<ans<<endl;
    return 0;
}
