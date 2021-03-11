#include<iostream>
#include<string.h>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{

    string s1,s2;
    cin>>s1>>s2;
    int l1,l2;
    l1 = s1.length();
    l2 = s2.length();

        for(int i=0; i<l1; i++)
        {
            if(s1[i]>='a'&&s1[i]<='z')
            {
                s1[i] -=32;
            }
            if(s2[i]>='a'&&s2[i]<='z')
            {
                s2[i] -=32;
            }

        }
        if(s1==s2){
            cout<<0<<endl;
        }
        else if(s1<s2){
            cout<<-1<<endl;
        }
        else{
            cout<<1<<endl;
        }
    return 0;
}
