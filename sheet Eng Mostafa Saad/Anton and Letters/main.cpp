#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int Size = 26;
    string x;
    int arr[Size] = {0} ,Count=0;
    getline(cin,x);
    int len = x.length();

    if(len >2)
    {
        for(int i = 1; i < len; i += 3)
			arr[x[i] - 'a']++;
        for(int i = 0; i < Size; i++)
			Count += (arr[i] > 0);
    }
    cout<< Count;


    return 0;
}
