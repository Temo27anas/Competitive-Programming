#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,A=0,D=0;
    cin>>n;
    string match;
    cin>> match;

    for(int i=0;i<n;i++){
        if(match[i]=='A')A++;
        else D++;

    }

    if(A==D) cout <<"Friendship";
    else if (max(A,D)==A) cout<<"Anton"<<endl;
   else  cout<<"Danik"<<endl;


    return 0;
}
