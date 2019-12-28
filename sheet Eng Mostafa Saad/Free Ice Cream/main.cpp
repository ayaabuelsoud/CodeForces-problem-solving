#include <iostream>

using namespace std;

int main()
{
    long long n, f, x;
    int cont=0;
    char op;
    cin >> n>> f;

    for(int i=0;i<n;i++)
    {
        cin>>op>> x;
        if(op=='+')
            f+=x;
        else if(x<=f)
            f-=x;
        else
            cont++;
    }

    cout <<f<<" "<<cont;

    return 0;
}
