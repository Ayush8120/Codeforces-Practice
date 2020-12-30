#include<iostream>
#include<conio.h>
using namespace::std;
int main()
{
    int count,len,n,i,j;
    count=0;
    string input;
    cin>>n;
    cin>>input;
    len = input.length();
    for(i=0;i<len-1;i++)
    {
        if(input[i]==input[i+1])
        {
            count = count+1;
        }
    }
    cout<<count;
    return 0;
}
