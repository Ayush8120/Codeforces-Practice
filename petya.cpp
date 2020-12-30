#include<iostream>
#include<conio.h>
using namespace::std;
int main()
{
    int n,p,a;
    int sum;
    int ques =0;
    cin>>n;
    while(n>0)// 1 iteration per question, total question = n
    {
        sum=0;
        for(p=3;p>0;p--) //on completion of this for loop 1 question gets over thus
            {cin>>a;     // corresponding sum gets calculated
            sum = sum + a;} // on which we then apply the condition
        if(sum >= 2)
            ques = ques +1;
        n= n-1;
    }
    cout<<ques;
    return 0;
}
