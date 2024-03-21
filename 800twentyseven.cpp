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
        double prod=1;
        for(int i=0;i<n;i++){
            cin>>v[i];
            prod*=v[i];
        }
        double product=1;
        int ans=-1;
        for(int i=0;i<n;i++){
            product*=v[i];
            prod/=v[i];
            if(product==prod){
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}