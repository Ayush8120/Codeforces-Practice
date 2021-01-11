#include<iostream>
using namespace::std;
int main()
{
int n,t,i,j,temp;
cin>>n>>t;
char arr[n];
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
for(i=1;i<=t;i++)
{
    for(j=0;j<n-1;)
    {
        if(arr[j]<arr[j+1])
        {
            temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
            j = j+2;
        }
        else
        {
            j++;
        }
    }
}
for(i=0;i<n;i++)
{cout<<arr[i];}


}
