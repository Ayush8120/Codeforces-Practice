#include<iostream>
#include<string>
using namespace::std;
int main()
{
    string arr;
    int i,len;
        getline(cin,arr);

    len = arr.length();
    for(i=0;i<len;i++)
    {
        if(arr[i] =='H' || arr[i] == 'Q' || arr[i] == '9' )//|| arr[i] == '+')
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
