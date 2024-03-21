#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<limits.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int ii=0;ii<t;ii++){
        long long a,b,m;
        cin>>a>>b>>m;
        long long ans=0;
        if((max(a,b)-min(a,b))<=m) ans+=2;
        ans+=(m/a);
        ans+=(m/b);
        cout<<ans<<endl;
    }
    return 0;
}