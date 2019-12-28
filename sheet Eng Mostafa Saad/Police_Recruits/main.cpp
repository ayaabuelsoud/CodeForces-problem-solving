#include <iostream>

using namespace std;

int main()
{
    int n, events,Police=0, CrmUntret=0;  //criem untreated
    cin >>n;
    for(int i=0; i<n; i++)
    {
        cin>> events;
        if(events==-1)
        {
            if(Police==0) {CrmUntret++;}
            else
            {Police-- ;}
        }
        else {
            Police+= events;
        }
    }
        cout <<CrmUntret<<endl;

    return 0;
}
