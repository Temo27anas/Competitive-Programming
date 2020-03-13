#include <iostream>

using namespace std;

int main()
{
int Tab[4],sum(0);
string s;
cin>>Tab[0]>>Tab[1]>>Tab[2]>>Tab[3];
cin>>s;
 for(int i=0;i<s.length();i++){
    if(s[i] == '1' ) sum=sum+Tab[0];
    else if(s[i] == '2' ) sum=sum+Tab[1];
    else if(s[i] == '3' ) sum=sum+Tab[2];
    else if(s[i] == '4' ) sum=sum+Tab[3];
 }
cout<<sum;
}
