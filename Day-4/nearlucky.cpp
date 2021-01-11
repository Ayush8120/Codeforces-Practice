//NEW QUESTION: REPLY "YES" ONLY IF DIGITS 4,7 OR NO. OF DIGITS ARE A LUCKY NUMBER

#include<iostream>
#include<string>
#include<cstdlib>
using namespace :: std;
int checkluck(string luckcheck){
    int i,len;
    len = luckcheck.length();
    int count =0 ;

    for(i=0;i<len;i++)
        {
            if(luckcheck[i]=='4' || luckcheck[i]=='7')
            {
                count = count +1;
            }
        }
    if(count == len)
    {
        cout<<"YES";
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{
    int len;
    long long unsigned int n;
    cin>>n;
    string num = to_string(n);//test -1
    len = num.length();
    if(checkluck(num))//if returned 1 then only will enter this conditional statement
    {
        string length = to_string(len);//test - 2
        if(checkluck(length))//will only enter if 1 is returned
        {
            cout<<"NO";
            return 0;
        }
    }
}
