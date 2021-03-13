#include<iostream>
#include<string>
using namespace std;

int main()
{
    int x,n=0;
    cin>>x;
    for(int i = 5;i>0;i--){
        n = x/i;
       if(x%i!=0){
            n += 1;
            break;
        }
        else{
            break;
        }

    }
    cout<<n<<endl;
    return 0;
}
