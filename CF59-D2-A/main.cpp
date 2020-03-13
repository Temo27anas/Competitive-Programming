#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int lower=0,upper=0;
   for(int i=0;i<str.length();i++){
    if(isupper(str[i]))upper++;
    else lower++;
   }
    if(upper<=lower){
        for(int i=0;i<str.length();i++){
            //lakan 7arf i == majiscule
            str[i]=tolower(str[i]);}
                }

        else {
            for(int i=0;i<str.length();i++){
           {
            str[i]=toupper(str[i]);}
            }


        }
        cout<<str;

}



