#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_set>
#include<limits.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int ii=0;ii<t;ii++){
        int n;
        cin>>n;
        vector<int>v(n);
        unordered_set<int>st;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            st.insert(v[i]);
            sum+=v[i];
        }
        if(sum%3==0) cout<<0<<endl;
        else{
            bool flag=false;
            for(auto ele:st){
                int m=ele;
                if((sum-m)%3==0){
                    flag=true;
                    break;
                }
            }
            if(flag) cout<<1<<endl;
            else if(sum%3==1) cout<<2<<endl;
            else if(sum%3==2) cout<<1<<endl;
        }
    }
    return 0;
}