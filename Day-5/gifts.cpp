#include<iostream>
using namespace ::std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n];
    int b[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        b[arr[i] - 1] = i +1;
    }
    for(j=0;j<n;j++)
    {
        cout<<b[j]<<' ';
    }

}
