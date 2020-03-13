#include <iostream>

using namespace std;

int main()
{
    int limak,bob,y=0;
    cin>>limak>>bob;
    while(limak<=bob){
        y=y+1;
       limak=limak*3;
       bob=bob*2;
    }
    cout<<y;
}
