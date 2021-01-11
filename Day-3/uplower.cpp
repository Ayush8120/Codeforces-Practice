#include<iostream>
using namespace::std;
int main()
{
    int count =0;
    string x;
    char up[101]={'0'};
    char down[101]={'0'};
    cin>>x;
    //65-90 cap
    //97-122 small
    int i,j;
    int up_count =0;
    for(i=0;i<x.length();i++)
    {
        if(int(x[i])>=97 && int(x[i])<=122)
        {
            down[i] = x[i];
            up[i] = int(x[i]) - 32;
            count = count +1;
        }
        else if(int(x[i])>=65 &&int(x[i])<=90)
        {
            down[i]= int(x[i]) + 32;
            up[i] = x[i];
            up_count = up_count +1;
        }
    }
    if(count >= up_count)
    {
        cout<<down;
    }
    else
    {
        cout<<up;
    }
}
