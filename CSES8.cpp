#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_set>
using namespace std;

bool flag=false;

void f(vector<int>&nums,float &sum,float curr,int idx,vector<int>&v,vector<int>&s){
    if(curr==(sum-(sum/2))){
        if(flag==false){
            cout<<"YES"<<endl;
            flag=true;
            cout<<v.size()<<endl;
            for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
            cout<<endl;
            cout<<s.size()<<endl;
            for(int i=0;i<s.size();i++) cout<<s[i]<<" ";
        }        
        return;
    }
    if(idx==nums.size()) return;
    if(flag==false){
        v.push_back(nums[idx]);
    curr+=nums[idx];
    f(nums,sum,curr,idx+1,v,s);
    curr-=nums[idx];
    v.pop_back();
    s.push_back(nums[idx]);
    f(nums,sum,curr,idx+1,v,s);
    s.pop_back();
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>nums;
    float sum=0;
    for(int i=1;i<=n;i++){
        nums.push_back(i);
        sum+=i;
    }
    vector<int>v;
    vector<int>s;
    f(nums,sum,0,0,v,s);
    if(flag==false) cout<<"NO";
    return 0;
}