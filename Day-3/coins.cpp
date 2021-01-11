#include<iostream>
using namespace::std;
int main()
{
    int n,i,j,temp,sum_h;
    int sum = 0;
    sum_h=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum = sum + arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j] >arr[j+1])
            {

                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        sum_h = sum_h + arr[n-i-1];
        if(sum_h> sum - sum_h)
        {
            cout<<i+1;
            return 0;
        }
    }
}





