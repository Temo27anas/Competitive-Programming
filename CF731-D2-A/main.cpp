#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int sum=0;
    cin>>s;
    char index='a';
    for(int i=0;i<s.length();i++){
        int dis=abs(index-s[i]);
        if(dis<=13)sum=sum+dis;
        else sum=26-dis +sum;
        index=s[i];

    }
    cout<<sum;

    return 0;
}
