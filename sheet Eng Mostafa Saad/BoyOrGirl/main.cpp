#include <iostream>
#include <string>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int X, Count=0;
    string S;
    cin>> S;
    X= S.length();
    sort(S.begin(),S.end());

    for(int i=1; i<X; i++)
    {
        if(S[i] != S[i-X])
            {Count++;}
    }
    if((Count+1)%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}
