#include<iostream>
using namespace::std;
int main()
{
    int n,k,i,ans;
    cin>>n>>k;
    while(k>0)
    {
        if(n%10 != 0)
            {n = n -1;}
        else
        {
            n = n/10;
        }
        k--;
    }
    cout<<n;
}