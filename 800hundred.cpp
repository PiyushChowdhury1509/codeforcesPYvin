#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int z=1;z<=t;z++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        vector<int>nums=v;
        sort(nums.begin(),nums.end());

        bool flag=false;
        for(int i=1;i<n;i++){
            if(v[i]<v[i-1] && v[i]<v[i+1]){
                flag=true;
                break;
            }
        }
        bool t=false;
        for(int i=0;i<n;i++){
            if(nums[i]!=v[i]) {
                t=true;
                break;
            }
        }
        reverse(nums.begin(),nums.end());
        bool f=false;
        for(int i=0;i<n;i++){
            if(v[i]!=nums[i]){
                f=true;
                break;
            }
        }
        if(f==false) cout<<"NO"<<endl; 
        else if(t==false) cout<<"YES"<<endl;
        else if(flag==true) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}