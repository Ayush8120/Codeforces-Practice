#include<iostream>
using namespace::std;
int main()
{
    unsigned int x;
    int i,j;
    int steps=0;
    cin>>x;

    for(j =5;j>=1;j--)
    {
        steps = steps + (x/j);
        x = x%j;
    }

    cout<<steps;
    return 0;
}
