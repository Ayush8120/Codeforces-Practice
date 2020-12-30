#include<iostream>
using namespace::std;
int main()
{
    int n,come_in,go_out,total_flux;
    total_flux = 0;
    cin>>n;
    int i,j,ans;
    ans =0;
    for(i=0;i<n;i++)
    {
        cin>>go_out;
        cin>>come_in;
        total_flux = total_flux + come_in - go_out;
        if(total_flux> ans)
        {
            ans = total_flux;
        }

    }
    cout<<ans;
}
