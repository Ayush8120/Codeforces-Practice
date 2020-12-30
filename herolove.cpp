#include<iostream>
#include<conio.h>
#include<cstring>
using namespace::std;
int main()
{
    string input;
    int len,count;
    int i,j;
    count =0;
    cin>>input;
    len = input.length();
    for(i=0;i<len -1;i++)
    {
        for(j = i+1; j <= len-1; j++)
        {
          if(input[i] == input[j] && input[i] != '$')
            {
                input[j] = '$';
                count = count +1;
            }
        }
    }
    //cout<<input<<'\n';
    //cout<<count<<'\n';
    count = len -count;
    if(count%2 == 0)
    {
        cout<<"CHAT WITH HER!";
    }
        else{cout<<"IGNORE HIM!";}
        return 0;
}
