#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S1=" ", S2=" ";
    cin>>S1 >> S2;
    if(S1.size()== S2.size())
    {
        for(int i=0; i<S1.length();i++){
            S1[i]=tolower(S1[i]);
            S2[i]=tolower(S2[i]);
        }
        if(S1<S2) {cout<<-1 ;}
        else if (S1>S2) {cout <<1 ;}
        else {cout<<0 ;}

    }

    return 0;
}
