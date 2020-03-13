#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a[4];
    int k=0;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a,a+4);

    for(int i=0;i<3;i++){if(a[i]==a[i+1]){k++;}}
    cout<<k;

        return 0;
}
