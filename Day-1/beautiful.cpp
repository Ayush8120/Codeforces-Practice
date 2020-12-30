#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace:: std;
int main()
{
    int i,j,m,n,ans;
    int input[5][5];
    for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                cin>>input[i][j];
                if(input[i][j] == 1)
                {
                    m = i;
                    n = j;
                }
            }
        }
ans = abs(m-2) + abs(n-2);
cout<<ans;
return 0;
}
