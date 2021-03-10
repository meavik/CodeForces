#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int M,N,i=0;
    cin>>M>>N;
    if((M>=1&&N>=1)&&(M<=16&&N<=16)){
        int a = M*N;
            i = a/2;
    }
    cout<<i<<endl;
}
