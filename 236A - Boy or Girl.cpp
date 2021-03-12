#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    int i,j,l,c=0;
    c=s.size();
    for(i=0;i<s.size();i++){
        for(j=i+1;j<s.size();j++){
            if(s[i]!=s[j]){
                continue;
            }
            else{
                c--;
                break;
            }
        }
    }
 
    if(c%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
 
    return 0;
}
