#include<iostream>
using namespace::std;
int main()
{
    unsigned int w,n,k;
    long int ans;
    cin>>k>>n>>w;
    ans = ((w*(w+1)/2)*k) -(n);
    if(ans < 0)
    {
        cout<<"0";
        return 0;
    }
    cout<<ans;
    return 0;
}
