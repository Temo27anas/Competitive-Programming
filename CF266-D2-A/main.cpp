#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k(0);
    cin>>n;
    string Tab;
    cin>>Tab;
    for(int i=0;i<n-1;i++){
        if(Tab[i]==Tab[i+1])k++;
}

cout<<k;
}
