#include <iostream>
#include<cctype>

using namespace std;

int main()
{   std::locale loc;
    string str,str2;
    cin>>str>>str2;
    for (std::string::size_type i=0; i<str.length(); ++i)
        {str[i]=tolower(str[i],loc);}

    for (std::string::size_type i=0; i<str2.length(); ++i)
        {str2[i]=tolower(str2[i],loc);}

    if(str==str2){
    cout<<"0";
    }
     else if(str<str2){
    cout<<"-1";
    }
      else {
    cout<<"1";
    }

  return 0;
}
