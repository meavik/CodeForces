#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a,b,i=1;
    cin>>a>>b;
    while(i){
        a *=3;
        b *=2;
        if(a>b){
            cout<<i<<endl;
            break;
        }
        i++;
    }

    return 0;
}
