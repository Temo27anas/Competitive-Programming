#include <iostream>

using namespace std;

int main()
{
    int n,result=0;
    cin>>n;
    for(int i=0;i<n;i++){
            int sum=0;
            for(int k=0;k<3;k++){
               int a=0;
               cin>>a;
               sum=sum+a;
        }
    if(sum>=2)result++;
    }
    cout<<result;
    return 0;
}
