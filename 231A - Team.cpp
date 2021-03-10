#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    static int no = 0;
    int n;
    cin>>n;
    if(n>=1&&n<=1000){
     bool a,b,c;
     int i = 0;
     for(;i<n;i++){
        cin>>a>>b>>c;
        if(a&&b){no++;}
        else if(c&&b){no++;}
        else if(a&&c){no++;}
     }
     cout<<no<<endl;
    }
    return 0;
}
