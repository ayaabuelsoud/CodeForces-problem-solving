#include <iostream>
#include <bits/stdc++.h>

using namespace std;
string S;
int main()
{
    int a1 ,a2, a3, a4 , sum=0;

    cin >> a1>>a2>>a3>>a4 ;
    cin >> S ;
    for(int i=0; i<S.size(); i++)
    {
        switch(S[i])
        {
            case '1': sum+=a1; break;
            case '2': sum+=a2 ; break;
            case '3': sum+=a3 ; break;
            case '4': sum+=a4 ; break;
        }
    }
    cout << sum <<endl;
    return 0;
}
