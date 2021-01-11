#include<iostream>
using namespace ::std;
int main()
{
    int i,len1,len2,count1,count2;

    string word1;
    string word1_t;
    count1=0;
    count2=0;
    cin>>word1>>word1_t;
    len1 = word1.length();
    len2 = word1_t.length();
    if(len1 != len2)
    {
        cout<<"NO";
    }
    else
    {
        for(i=0;i<len1;i++)
        {
            if(word1[i] != word1_t[len1 - i-1])
            {
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
    }
    return 0;
}
