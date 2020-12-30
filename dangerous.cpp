#include<iostream>
#include<conio.h>
using namespace::std;
int main()
{
    string input;
    int count,a,i,len;
    a=0;
    cin>>input;
    len = input.length();
    if(len<7) // the basic check
    {
        cout<<"NO";
        return 0;
    }
    for(i=a;i<=len-7;i++)
    {
        count = 0;
        for(int j=0;j<7;j++)
        {
            if(input[i]==input[i+j]) //we want 7 consecutive digits for YES
            {
                count = count+1;
            }
            else
            {
                a = i+j; //if not then we reach the first stage with a shifted anchor
                break;
            }
        }
        if(count==7)//if for any anchor we get a count of 7;its YES
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";//if reaching till here.Then no return 0 met.
}
//GREAT PROBLEM - implementation done without help
