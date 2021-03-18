#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long n,k,f;
    cin>>n>>k;
    unsigned long t;
    if(n%2==0){
        t =n/2;
    }
    else{
        t=(n/2)+1;
    }
    if(k<=t){
        cout<<(k*2)-1<<endl;
    }
    else if(k>t&&k<=n){
        cout<<(k-t)*2<<endl;
    }
    return 0;
}
