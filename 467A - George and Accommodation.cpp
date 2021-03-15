
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int p[n],q[n];
    int c=0;
    for(int i=0;i<n;i++){
        cin>>p[i]>>q[i];
        if(q[i]-p[i]>1){
            c++;
        }
    }
    cout<<c<<endl;
 
    return 0;
}
