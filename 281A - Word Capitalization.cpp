#include<iostream>
#include<cstring>
using std::cout;
using std::cin;
using std::string;
using std::endl;


int main()
{
    string s;
    cin>>s;
    if(s[0]>='a'&&s[0]<='z')
    {
        s[0] -= 32;
    }
    cout<<s<<endl;
    return 0;
}
