#include<iostream>
#include<string>
using namespace std;

int main()
{
    unsigned long long int n,temp,a;
    int c=0;
    cin>>n;
    temp = n;
    while(temp){
        a = temp%10;
        if(a==4||a==7){
            c++;
        }
        temp /= 10;
    }
    if(c==4||c==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
