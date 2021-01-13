#include<iostream>
#include<cmath>
using namespace :: std;
int main()
{
    int n,i,sum,a,stag;
    sum =0;
    int twos =0;
    int ones =0;
    int f_taxi =0;
    int taxi =0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a%4 == 1)
        {
            ones = ones +1;
        }
        else if(a%4 == 3)
        {
            taxi = taxi +1;
        }
        else if(a%4 == 2)
        {
            twos = twos + a;
        }
        else if(a%4 == 0)
        {
            f_taxi = f_taxi +1;
        }
    }
    stag = max(ones - taxi,0);
    // these are the singles which can not be accommodated in group 3 taxi
    if((stag + twos)%4 == 0 && (stag + twos)>=4) //they will now travel with group of 2's or group of 1's
    {
        sum = (stag + twos)/4;

    }
    else if((stag + twos)%4 != 0 && (stag + twos)>=0) // if not divisible by 4 then next largest number of taxi's are taken
    {
     sum = ((stag + twos)/4) + 1;
    }
    else if((stag + twos)%4 == 0 && (stag + twos)<4 && (stag + twos)>0)// if stag + twos = {1-4}then 1 taxi toh pakka lagegi
    {
        sum = 1;
    }
    //agar stags+twos = 0 ; then 0 taxis required for group of 1,2 but for group of 4,3 we will proceed normally
    cout<<(f_taxi + taxi + sum) ;
    return 0;
}
