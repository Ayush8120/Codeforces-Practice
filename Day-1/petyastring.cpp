#include<iostream>
#include<conio.h>
using namespace :: std;
int main()
{
    string input;
    string out(200,' ');
    int i=0;
    int t=0;
    int len;
    int flag =0;
    char vowel[12] = {'a','A','e','E','i','I','o','O','u','U','y','Y'};
    cin>>input;
    //cout<<input.length()<<'\n';
    len = input.length();

while(i < len) //to lowercase
{
    if(input[i]>=65 && input[i]<=92)
      {
	  input[i]=input[i]+32;
      }
    //cout<<input[i];
    i++;
}
//out = input;
for(int j=0;j < len;j++)
{
    flag = 0;
    for(int k =0;k<12;k++)
    {
     if(input[j] == vowel[k])
        {flag = 1;
        break;}
    }
    if(flag ==0)
    {

        out[t] = '.';
        out[t+1] = input[j];
        t = t + 2;
    }
}
cout<<out<<'\n';
return 0;
}

