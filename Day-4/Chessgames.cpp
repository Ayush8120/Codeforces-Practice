#include<iostream>
using namespace :: std;
int main()
{
    int n,i;
    cin>>n;
    int count_A=0;
    int count_D =0;
    char arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i] == 'A')
        {
            count_A++;
        }
        else
        {
            count_D++;
        }
    }
    if(count_A > count_D)
    {
        cout<<"Anton";
        return 0;
    }
    else if(count_A < count_D)
    {
        cout<<"Danik";
        return 0;
    }
    else
    {
        cout<<"Friendship";
        return 0;
    }
}
