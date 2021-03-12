#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i,j,k;
    i=j=k=0;
    for(;i<s.size();i++){
        if(s[i]=='1'){
            j++;
            k=0;
        }
        else{
            k++;
            j=0;
        }
        if(j==7||k==7){
            break;
        }
    }
    if(j==7||k==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
