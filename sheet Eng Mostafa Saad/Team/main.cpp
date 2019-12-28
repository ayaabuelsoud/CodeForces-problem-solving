#include <iostream>

using namespace std;

int main()
{
    int n,x,y,z,ans=0;
    cin>>n;
    for(int i=0; i<n;i++)
    {
            cin>>x>>y>>z;
            int sum =x+y+z;
            if(sum>=2)
                ans++;
    }
    cout << ans << endl;
}
