#include<iostream>
#include<conio.h>
using namespace::std;
int main()
{
    string input;
    cin>>input;
    int i;
    if(input[0] >= 97 && input[0] <= 122)
    {
        input[0] = input[0] - 32;
    }
cout<<input;
return 0;
}
