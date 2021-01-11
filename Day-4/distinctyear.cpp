#include<iostream>
#include<string>
#include<cstdlib>
using namespace::std;
int main()
{
    int arr[4];
    int i,j,n;
    int flag =0;
    /*for(i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    */
    cin>>n;
    n++;
    string year;
    for(n=n;n<=10000;n++)
        {
            flag = 0;
            year = to_string(n);
            for(i=0;i<3;i++)
              {
                    for(j=1;j<4-i;j++)
                    {
                        if(year[i] == year[i+j])
                        {
                            flag =1;
                            break;
                        }
                    }
                    if(flag==1)
                    {
                        break;
                    }
              }
              if(flag == 0)
              {
                cout<<n;
                return 0;
              }
              else
              {
                  continue;
              }
        }
}
