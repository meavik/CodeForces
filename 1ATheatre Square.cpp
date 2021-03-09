#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    unsigned long long int n,m,a;
    cin>>n>>m>>a;
    if(n%a==0){
        n /=a;
    }
    else{
        n = n/a + 1;
    }
    if(m%a==0){
        m /= a;
    }
    else{
        m=m/a + 1;
    }
    cout<<n*m<<endl;
}
