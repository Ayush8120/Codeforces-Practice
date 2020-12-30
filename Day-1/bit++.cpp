#include<iostream>
#include<conio.h>
#include<cstring>
using namespace::std;
int main()
{
    int n,x;
    x =0;
    string t1,a1,b1,c1,d1;
    a1 = "++X";
    b1 = "X++";
    c1 = "--X";
    d1 = "X--";
    cin>>n; //number of statemets in the programme
    while(n>0)
    {
        cin>>t1;
       if (t1== a1 || t1 == b1)
       // if((strcmp(t1,a1)||strcmp(t1,b1)))
        {
            x = x +1;
        }
        else if(t1 == c1 || t1 == d1)
        {
            x = x -1;
        }
        n--;
    }
    cout<<x;
    return 0;
}
