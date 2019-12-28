#include <iostream>
#include <string>

using namespace std;

int main()
{
     string s , outS;
     cin>> s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='a' ||s[i]=='o' ||s[i]=='e'|| s[i]=='y' ||s[i]=='u' ||s[i]=='i' ||s[i]=='A' ||s[i]=='O' ||s[i]=='E'|| s[i]=='Y' ||s[i]=='U' ||s[i]=='I')
            continue;
        else{
            outS +=".";
            outS+=tolower(s[i]);
        }
    }
    cout <<outS;
    return 0;
}
