#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int flag;
    cin>>s;
    for(int i=0;i<s.size();i+=2){
        flag=0;
        for(int j=0;j<s.size()-2;j+=2){
            if(s[j]>s[j+2]){
                swap(s[j],s[j+2]);
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }

    cout<<s<<endl;

    return 0;
}
