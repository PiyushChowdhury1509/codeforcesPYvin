#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int ans=1;
    int length=1;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]) length++;
        else{
            ans=max(ans,length);
            length=1;
        }
    }
    ans=max(ans,length);
    cout<<ans;
    return 0;
}