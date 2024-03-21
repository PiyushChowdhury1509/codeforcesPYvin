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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int ans=0;
        int length=0;
        for(int i=0;i<n;i++){
            if(v[i]==0) length++;
            else{
                ans=max(length,ans);
                length=0;
            }
        }
        ans=max(length,ans);
        cout<<ans<<endl;
    }
    return 0;
}