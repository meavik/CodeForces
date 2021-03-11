#include<iostream>
#include<cstring>
using std::cout;
using std::cin;
using std::string;
using std::endl;


int main()
{
    int n,a=0;
    cin>>n;
    if(n>=1&&n<=50)
    {
        string s;
        cin>>s;
        int i;
        for(i=0;i<n;i++){
            if(s[i]==s[i+1]){
                a++;
            }
        }
    }
    cout<<a<<endl;
    return 0;
}
