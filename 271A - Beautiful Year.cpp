#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int a[])
{
    int flag;
    for(int i=0; i<4-1; i++)
    {
        flag=0;
        for(int j=0; j<4-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=  a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            flag=1;
        }
        if(flag==0)
        {
            break;
        }
    }
}
void createArray(int a[],int temp)
{
    for(int i=0; i<4; i++)
    {
        a[i] = temp%10;
        temp /=10;
    }
}
int main()
{
    int y;
    cin>>y;
    for(y=y+1;; y++)
    {
        int temp=y;
        int a[4];
        int flag=0;
        if(flag==1)
        {
            break;
        }
        createArray(a,temp);
        bubbleSort(a);
        if(a[0]!=a[1]&&a[1]!=a[2]&&a[2]!=a[3]){
                cout<<y<<endl;
            break;
        }
    }


    return 0;
}
