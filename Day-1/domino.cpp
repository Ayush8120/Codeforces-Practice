#include<iostream>
#include<conio.h>
using namespace::std;
int main()
{
    int t,n,m,a;
    t = 1;
    a=0;
    cin>>m>>n;
    for(t=1;t*2<= m*n;t++)
    {
        a = a+1;
    }
    cout<<a;
}
