#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int dom[n],ext[n],res(0);
    for(int i=0;i<n;i++){
        cin>>dom[i];
        cin>>ext[i];
    }
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(dom[i]==ext[j])res++;
    }
    }

    cout<<res;


}
