#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int n,k,c=0;
    cin>>n>>k;
    if(k<=n&&(k>=1&&n<=50)){
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
        if(a[i]<0||a[i]>100){
            cout<<"Not a valid entry"<<endl;
        }
    }
    k = k-1;
    for(int i = 0;i<n;i++){
        if(a[i]>0&&a[i]>=a[k]){
            c++;
        }
    }
    cout<<c;
    }
}
