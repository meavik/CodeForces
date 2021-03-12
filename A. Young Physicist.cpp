#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,equ1=0,equ2=0,equ3=0;
    cin>>n;
    int x[n],y[n],z[n];
    for(int i=0,j=0;j<3,i<n;j++,i++){
            cin>>x[j];
            cin>>y[j];
            cin>>z[j];
    }
    for(int i =0;i<n;i++){
        equ1 += x[i];
        equ2 += y[i];
        equ3 += z[i];
    }
    if(equ1 == 0 && equ2 == 0 && equ3 == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
