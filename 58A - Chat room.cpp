#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2="hello";
    cin>>s1;
    int flag1=0,flag2=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s2[flag1]){
            flag1++;
            if(flag1==5)
                break;
        }
    }
    if(flag1==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
