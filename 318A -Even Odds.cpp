#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long n,k;
    cin>>n>>k;
    unsigned long t;
    if(n%2==0){
        t =n/2;
    }
    else{
        t=(n/2)+1;
    }
    if(k<=t){
        cout<<1+(k-1)*2<<endl;
    }
    else if(k>t&&k<=n){
        k = k/2;
        cout<<(1+(k-1)*2)+1<<endl;
    }

    return 0;
}
