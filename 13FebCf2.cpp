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
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++) mp[v[i]]++;
        
        int freq=INT_MIN;
        vector<int>nums;
        
        for(auto ele:mp){
            if(ele.second>=freq){
                freq=ele.second; // Update freq with the current element's frequency
            }
        }

        for(auto ele:mp){
            if(ele.second==freq) nums.push_back(ele.first); // Update the vector with the current element
        }
        
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int number=nums[i];
            int x=0;
            int y=n-1;
            while(y>=x){
                if(v[y]!=number && v[x]!=number) break;
                if(v[y]==number) y--;
                if(v[x]==number) x++;
            }
            ans=min(ans,((y-x)+1));
        }
        if(ans!=INT_MAX) cout<<ans<<endl;
        else cout<<0<<endl;
    }
    return 0;
}
