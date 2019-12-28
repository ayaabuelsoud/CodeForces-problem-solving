#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,t, x;
    string s;
    cin >>n >> t;
    cin>> s;
    for (int j=0; j<t ;j++) //for the time after which the queue will transform
    {
        for(int i=0; i<n; )
    {
        if(s[i] == 'B' && s[i+1]== 'G'){
                //swap by var x
            x=s[i];
            s[i]=s[i+1];
            s[i+1]= x;

            i=i+2;
        }
        else i++;
    }
    }
    cout<<s ;
    return 0;
}
