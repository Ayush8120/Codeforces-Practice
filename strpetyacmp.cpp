#include<iostream>
#include<conio.h>
using namespace::std;
int main()
{
    string str1,str2;
    int n,i,len,flag;
    i = 0;
    flag =0;
        cin>>str1;
        cin>>str2;
        len = str1.length();
        len = str2.length();
        while(i < str1.length()) //to lowercase
        {
            if(str1[i]>=65 && str1[i]<=92)
              {
              str1[i]=str1[i]+32;
              }
            i++;
        }
        i=0;
        while(i < str2.length()) //to lowercase
        {
            if(str2[i]>=65 && str2[i]<=92)
              {
              str2[i]=str2[i]+32;
              }
            i++;
        }
    for(n=0;n<len;n++)
    {
        if(int(str1[n]) < int(str2[n]))
        {
            cout<<"-1";
            flag =1;
            break;
        }
        else if(int(str1[n]) > int(str2[n]))
        {
            cout<<"1";
            flag =1;
            break;
        }

    }
    if(flag ==0)
    {
        cout<<"0";
    }
}
