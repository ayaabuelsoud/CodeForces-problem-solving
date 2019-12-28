#include <iostream>

using namespace std;

int main()
{
    int n, t , k , d;
    int result;
    cin >> n>> t >> k >>d;

    int T1=0;

    //عدد المرات اللى هستخدم فيها الفرن
    int g= (n+ k-1)/ k;
    for(int i=0; i<g; i++)
    {
        if(T1<= d) T1 +=t;
        else
            d+=t;
    }

    if(max(T1,d) < g*t)
        cout<< "YES"<<endl;
    else cout << "NO"<< endl;

    return 0;
}
