#include<iostream>
#include<conio.h>
using namespace::std;
int main()
{
    unsigned long long int n,m,a,t,t2;
    t = 1,t2 = 1;
    cin>>n>>m>>a;
    if (a==1)
        {cout<<n*m;
        return 0;
        }
    while(t*a<n)
    {
        t = t + 1;
    }
    while(t2*a<m)
    {
        t2 = t2 +1;
    }
    cout<<t*t2;
    return 0;
}
