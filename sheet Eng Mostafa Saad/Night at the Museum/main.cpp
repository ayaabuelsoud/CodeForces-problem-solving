#include <iostream>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;
string s;

int main()
{
    int total=0,state=0,difference,NewState ;
    cin >> s;
    for(int i=0; i<s.length(); i++)
    {
        NewState =s[i]-97;
        difference =abs(state-NewState);
        if(difference >13)
            total+= 26- difference;
        else
            total+= difference;

        state =NewState;
    }
    cout << total <<endl;

    return 0;
}
