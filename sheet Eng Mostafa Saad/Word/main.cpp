#include <iostream>

using namespace std;

int main()
{
    string x; int ctr=0;  //ctr is counter the capital letter
    cin>>x;
    for(int i=0; i<x.size(); i++)
    {
        if(isupper(x[i]))
            ctr++;
    }
    for(int i=0; i<x.size(); i++)
    {
        if(ctr>x.size()-ctr)
            {x[i]=toupper(x[i]); }
        else
            {x[i]=tolower(x[i]);}
    }
    cout<<x <<endl;
    return 0;
}
