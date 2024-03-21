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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        bool flag=false;
        for(int i=0;i<n;i++){
            if(v[i]==k){
                flag=true;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}