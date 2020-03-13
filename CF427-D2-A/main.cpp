#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp,freeofficer(0),crimes(0);
    cin>>n;


    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp>0){
           freeofficer=freeofficer+temp;
        }
        else if(freeofficer>0)freeofficer--;
        else crimes++;

    }



     cout<<crimes ;
}
