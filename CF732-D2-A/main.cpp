#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k,r;
    cin>>k>>r;
    int n=0;
    bool a=true;
    while( a ){
    n++;

    int T=k*n;
    if(T%10==r || T%10==0) a=false;
    }
    cout<<n;
    return 0;
}
