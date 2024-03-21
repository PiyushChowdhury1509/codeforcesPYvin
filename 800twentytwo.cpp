#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<limits.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    for(long long ii=0;ii<t;ii++){
        long long n,k;
        cin>>n>>k;
        if(n%2==0) cout<<"YES"<<endl;
        else{
            n-=k;
            if(n%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}