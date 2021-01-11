#include<iostream>
using namespace::std;
int main()
{
    string str;
    int l[2];
    int i;
    int anchor = -1;
    cin>>str;
    int j=0;
    int flag =0;
    char name[]={'h','e','l','l','o','\0'};

    /*for(i=0;i<str.length();i++)  ///this is the full implementation of the loop that is uncommented
    {
        if(str[i]=='h')
        {
            anchor = i;
            flag =1;
        }
    }
    if(flag ==0)
      {
          cout<<"NO";
          return 0;
      }
    flag =0;
    for(i= anchor +1 ;i<str.length();i++)
      {

        if(str[i] == 'e')
        {
            anchor = i;
            flag =1;
            break;
        }
      }
      if(flag ==0)
      {
          cout<<"NO";
          return 0;
      }
      flag =0;
    for(i=anchor + 1; i<str.length();i++)
        {
            if(str[i] == 'l')
            {
                anchor = i;
                flag =1;
                break;
            }
        }
    if(flag == 0)
    {
        cout<<"NO";
        return 0;
    }
    flag =0;
    for(i = anchor +1 ; i<str.length();i++)
    {
        if(str[i] == 'l')
            {
                anchor = i;
                flag =1;
                break;
            }
    }
    if(flag == 0)
    {
        cout<<"NO";
        return 0;
    }
    flag =0;
    for(i = anchor +1 ; i<str.length();i++)
    {
        if(str[i] == 'o')
            {
                anchor = i;
                flag =1;
                cout<<"YES";
                return 0;
            }
    }
    if(flag == 0)
    {
        cout<<"NO";
        return 0;
    } */

    for(j=0;j<5;j++) // h,e,l,l,o char array par loop
    {
        flag =0; // for every letter to be tested
        for(i=anchor + 1;i<str.length();i++) // initialization from 0, then the location of the matching alphabet saved before evacuation +1
        {
            if(str[i] == name[j])
            {
                anchor = i;//if found then location saved and evacuation starts
                flag =1; // if found then alarm raised and this loop left
                break;
            }
        }
            if(flag == 0) //if whole string searched but no match of that letter then say "NO"
                {
                    cout<<"NO";
                    return 0; // and exit
                }
    }
              cout<<"YES"; //if reached till here then it must be true as for every inequality we had direct termination punishment
               return 0;
}
