#include <iostream>

using namespace std;

int main()
{
    int n, reslt=0;
    cin >> n;
    int Home[n] , Guest[n];
    for(int i=0;i<n; i++){
        cin>>Home[i]>> Guest[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(Home[i]==Guest[j]){
               reslt++;
            }
        }
    }
    cout<<reslt;

    return 0;
}
