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
        long long a,b,c;
        cin>>a>>b>>c;
        long long ans=0;
        int l=b%3;
        bool flag=false;
        if(l!=0){
            int m=3-l;
            if(c<m){
                cout<<-1<<endl;
                flag=true;
            }
        }
        if(!flag){
            ans+=(b/3);
            ans+=a;
            if(l!=0){
                int m=3-l;
                c-=m;
                ans+=1;
            }
            ans+=(c/3);
            if((c%3)!=0) ans+=1;
            cout<<ans<<endl;
        }
    }
    return 0;
}