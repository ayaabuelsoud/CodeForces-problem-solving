#include <iostream>

using namespace std;

int main()
{
    int n, x,y,groups=0;
    cin>> n;
    for(int i=0; i<n; i++){
        if(i==0)
        {cin>>x; }
        else
        {
           y=x;
           cin >>x;
           if(y!=x)
                groups++;
        }
    }
    cout << ++groups <<endl;
    return 0;
}
