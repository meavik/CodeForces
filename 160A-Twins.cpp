#include<iostream>
#include<string>
using namespace std;
 
void Swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
 
void bubble(int a[],int n){
    int i,j,flag;
    for(i=0;i<n-1;i++){
        flag=0;
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                Swap(&a[j],&a[j+1]);
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
}
 
int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
 
    bubble(a,n);
 
    int sum1=0,c=0;
    for(int i=n-1;i>=0;i--){
        sum1 +=a[i];
        c++;
        if(sum1>sum/2){
            break;
        }
    }
    cout<<c<<endl;
 
    return 0;
}
