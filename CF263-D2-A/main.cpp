#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int Matrix[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>> Matrix[i][j];
        }
    }

    //
    int Res1,Res2;
    for (int j = 0; j < 5; j++) {
    if(Matrix[j][0]+Matrix[j][1]+Matrix[j][2]+Matrix[j][3]+Matrix[j][4]==1) Res1=j;

    }



for (int i = 0; i < 5; i++) {
    if(Matrix[0][i]+Matrix[1][i]+Matrix[2][i]+Matrix[3][i]+Matrix[4][i]==1) Res2=i;

    }
cout<<abs(3-(Res2+1))+abs(3-(Res1+1));


    return 0;
}
