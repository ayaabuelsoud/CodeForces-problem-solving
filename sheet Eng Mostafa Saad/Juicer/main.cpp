#include <iostream>

using namespace std;

int main()
{
    int n,b,d,a,sum=0,result=0 ;
    cin >>n >>b >>d ;
    for(int i=0; i<n;i++)
    {
        cin>> a;

        if(a<=b)
        {sum+=a;}

        if(sum>d)
        {
            result++;
            sum=0;
        }
    }
    cout<< result;

    return 0;
}
