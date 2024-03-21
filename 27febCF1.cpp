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
        long long sum=0;
        for(int i=0;i<n;i++) sum+=abs(v[i]);
        cout<<sum<<endl;
    }
    return 0;
}