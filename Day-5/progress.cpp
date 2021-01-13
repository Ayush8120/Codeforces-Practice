#include<iostream>
using namespace :: std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    int count=1;
    int arr;
    int flag =0;;
    int length_max=1;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            cin>>arr;
        }
        else
        {
            cin>>j;
            if(j>=arr)
            {
                arr =j;
                count++;
                //cout<<count<<'\n';
                //length_max = count;
                if(count > length_max)
                    {
                        length_max = count;
                    }
            }
            else
            {
                arr =j;
                if(flag==0)
                {
                length_max= count;
                //cout<<length_max<<'\n';
                flag =1;
                }
                else
                {
                    if(count > length_max)
                    {
                        length_max = count;
                    }
                }
                count =1;
                //cout<<length_max<<'\n';
            }
        }

    }
    cout<<length_max;
}
