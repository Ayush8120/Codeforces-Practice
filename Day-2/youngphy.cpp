#include<iostream>
#include<conio.h>
using namespace::std;
int main()
{
    int n,force_x,force_y,force_z;
    cin>>n;
    int i,sum_x,sum_y,sum_z,j;
    sum_z =0;
    sum_x=0;
    sum_y=0;
    for(i=0;i<n;i++)
    {

        cin>>force_x;
        cin>>force_y;
        cin>>force_z;
        sum_x = sum_x + force_x;
        sum_y = sum_y + force_y;
        sum_z = sum_z + force_z;

    }
    if(sum_y == 0 && sum_x == 0 && sum_z == 0)
    {
        cout<<"YES";
        return 0;
    }
        cout<<"NO";
        return 0;
}
