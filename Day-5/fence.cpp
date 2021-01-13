#include<iostream>
using namespace ::std;
int main()
{
    int n,h,i,j,a,count,temp;
    count=0;
    temp =0;
    cin>>n>>h;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a>h)
        {
            count = count + 2;
        }
        else
        {
            count = count + 1;
        }
    }
    cout<<count;
}
