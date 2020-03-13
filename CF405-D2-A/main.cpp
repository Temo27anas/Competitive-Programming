#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int Tab[n];
    for(int i=0;i<n;i++){
        cin>>Tab[i];
    }
   sort(Tab, Tab+n);
   for(int i=0;i<n;i++){
        cout<<Tab[i]<<" ";
   }

    return 0;
}
