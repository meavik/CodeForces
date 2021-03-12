#include<iostream>
#include<string>
using namespace std;

int main()
{
    int k,n,w,total=0,borrow;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        total += i*k;
    }
    borrow =total-n;
    if(borrow<=0){
        cout<<0<<endl;
    }
    else{
        cout<<borrow<<endl;
    }
    return 0;
}
