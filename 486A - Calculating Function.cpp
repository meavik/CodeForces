#include<bits/stdc++.h>
#define f(a) cout<<a<<endl;
using namespace std;

int main()
{
    long long n;
    cin>>n;
        if(n%2==0)
        {
            f(n/2);
        }
        else
        {
            f(-((n/2)+1));
        }
    return 0;
}
