#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mag[n];

    for(int i=0;i<n;i++){
        cin>>mag[i];
    }
    int grp=1;
     for(int i=0;i<n-1;i++){
       if( mag[i]-mag[i+1] !=0)grp++;
    }
    cout<<grp;
}
