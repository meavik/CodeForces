#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s,temp,t;
    cin>>s;
    cin>>t;
    temp = s;
    int l = s.size();
    int i=0,j=l-1;
    for(;i<l,j>=0;i++,j--){
        temp[j] = s[i];
    }
    if(temp==t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
