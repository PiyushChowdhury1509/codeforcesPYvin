#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<limits.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int minm=INT_MAX;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            flag=true;
            break;
        }
        int number=abs(v[i]);
        minm=min(number,minm);
    }
    if(flag) cout<<0;
    else cout<<minm;
    return 0;
}