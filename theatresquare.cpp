#include<iostream>
#include<conio.h>
using namespace::std;
int LCM(int n1,int n2)
{
    int max,lcm;
    max = (n1>n2)? n1:n2;
    while(1)
    {
        if(max%n1 == 0 && max%n2 ==0)
            {lcm = max;
            break;}
        else
            max = max + 1;
    }
    return lcm;
}
int main()
{
    int n,m,a,lcm;
    cin>>n>>m>>a;
    lcm = LCM(n*m,a*a);
    cout<<lcm;
    cout<<lcm/(a*a);
    return 0;
}
