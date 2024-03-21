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
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long x=c-a;
        long long y=d-b;
        if(x>y) cout<<-1<<endl;
        else{
            long long ans=0;
            ans+=abs(y);
            ans+=abs((y-x));
            cout<<ans<<endl;
        }
    }
    return 0;
}