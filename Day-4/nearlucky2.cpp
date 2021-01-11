#include<iostream>
#include<string>
#include<cstdlib>
using namespace :: std;
int main()
{
    int len,i;
    int count =0 ;
    int count2 = 0;
    int count_string_len;
    long long unsigned int n;
    cin>>n;
    string num = to_string(n);//test -1
    len = num.length();
    for(i=0;i<len;i++)
        {
            if(num[i]=='4' || num[i]=='7')
            {
                count = count +1;
            }
        }
        string count_string =to_string(count);
        count_string_len = count_string.length();

    for(i=0 ; i < count_string_len ; i++)
    {
        if(count_string[i]=='4' || count_string[i]=='7')
            {
                count2++;
            }
    }
            if(count2 == count_string_len)
            {
                cout<<"YES";
                return 0;
            }
            else{cout<<"NO";}


}
