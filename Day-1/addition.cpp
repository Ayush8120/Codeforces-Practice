#include<iostream>
#include<conio.h>
#include<cstring>
using namespace::std;
int main()
{
    string input;
    char a,b;
    int len;
    cin>>input;
    len = input.length();
    int i,j;

    for(j=0;j<(len - 1)/2;j++)
    {
        for(i=1;i<=((len -1)/2) -j;i++)
         {
             if (input[2*i] <= input[2*(i-1)])
            {
              a = input[2*i];
              b = input[2*(i-1)];
              input[2*(i-1)] = a;
              input[2*i] = b;

            }
         }
    }
cout<<input;
return 0;

}
