#include<iostream>
#include<cstdlib>
#include<string>
using namespace::std;

int main()
{
    string x;
    string p;
    cin>>x;
    int k = stoi(x); // as while checking for almost lucky no. we will have to find its divisors thus converting to int
    int i,j;
    int count =0;

    for(i=0;i<x.length();i++) //for checking lucky numbers
    {
        if(x[i]=='7' || x[i] =='4')
        {
            count = count +1; // its an OR condition agar 847 hua toh bhi enter toh 2 baar hi karega
        }
    }
    if(count == x.length()) // if total occurrences = length
    {
        cout<<"YES";
        return 0;
    }
    else
    { //now checking for almost lucky numbers

        for(j=1;j <= k;j++) //finding whether a number is its divisor or not
        {
            count = 0;
            if(k%j == 0) //if divisor then checking whether the divisor is lucky or not
            {
                p = to_string(j); // as now we need to do string operations on the divisor thus converting to string
                for(i=0;i< p.length();i++)
                {
                    if(p[i]== '4' || p[i]=='7') //same algo as the lucky number one
                    {
                        count = count +1;
                    }
            }
            if(count == p.length())
            {
                cout<<"YES";
                return 0;
            }
        }
        }
        cout<<"NO"; // if reached till here then surely not a lucky/almost lucky as for every equality we had termination.
        return 0;
    }
}
