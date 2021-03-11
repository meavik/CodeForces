#include<iostream>
#include<string>
using namespace std;

int main(){

    int n,x=0,i=0;
    cin>>n;
    string a;
    while(i<n){
        cin>>a;
        if(a[1]=='+')
            x++;
        else
            x--;
        i++;
    }
    cout<<x<<endl;
    return 0;
}
