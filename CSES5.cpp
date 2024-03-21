#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>ans;
    if(n==2 || n==3) cout<<"NO SOLUTION";
    else{
        int count=2;
        while(count<=n){
            ans.push_back(count);
            count+=2;
        }
        count=1;
        while(count<=n){
            ans.push_back(count);
            count+=2;
        }
    }
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    return 0;
}