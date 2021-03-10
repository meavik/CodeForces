#include<iostream>
#include<cstring>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(){
    string s1,s2;
    getline(cin,s1);
    int l = s1.length();
    for(int i = 0;i<l;i++){
        if(s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U'||s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='Y'||s1[i]=='y'){
            continue;
        }
        else{
            if(s1[i]>='A'&&s1[i]<='Z'){
                s1[i] += 32;
            }
            s2+= '.';
            s2+= s1[i];
        }
    }
    cout<<s2<<endl;
}
