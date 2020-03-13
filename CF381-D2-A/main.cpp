#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{

    int n,S=0,D=0;

    cin>>n;
    int Tab[n];
     for (int i = 0; i < n; i++)
        {

        cin>>Tab[i];
        }
         int r(n-1),l(0);
   for (int i = 0; i < n; i++) {
            if(i%2==0){
                if(Tab[l]<Tab[r]){
                    S=Tab[r]+S;
                    r--;
                }

                else if(Tab[l]>Tab[r]){
                    S=Tab[l]+S;
                    l++;

                    }
                else{  S=S+Tab[l];
                 }
        }

            else{
                    if(Tab[l]<Tab[r]){
                        D=Tab[r]+D;
                        r--;
                    }

                    else if(Tab[l]>Tab[r]){
                        D=Tab[l]+D;
                        l++;}
                    else{  D=D+Tab[l];
                 }
                    }




            }

    cout<<S<<" "<<D;
}
