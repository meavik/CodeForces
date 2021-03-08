#include<iostream>
#include<cstring>
using std::cout;
using std::string;
using std::cin;
using std::endl;

int main()
{
    string str;
    int n;
    cin>>n;
    if(n>=1&&n<=100)
    {
        while(n--)
        {
            cin>>str;
            int l = str.length();
            l>10?cout<<str[0]<<l-2<<str[l-1]<<endl:cout<<str<<endl;
        }
    }
    else
    {
        cout<<"Enter 1 to 100"<<endl;
    }
    return 0;
}
