#include<iostream>
#include<cmath>
using namespace::std;
int main()
{
    int t,a,b,count;
    t =1;
    cin>>a>>b;
    while((pow(3,t)*a - pow(2,t)*b) <= 0)
    {
        if((pow(3,t))*a - (pow(2,t)*b) == 0)     //^ se power nhi chadti
        { // agar is iteration mai 0 ho gya then next mai enter nhi hoga
            t = t+1;                       //isi baar mai niptana padega
            cout<<t;
            return 0;
        }
        t = t+1;
    }
    cout<<t;
    return 0;
}
