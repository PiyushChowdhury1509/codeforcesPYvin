#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_set>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int ii=0;ii<t;ii++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int sum=0;
        for(int i=0;i<n;i++) sum+=v[i];
        if(sum%n!=0) cout<<"NO"<<endl;
        else{
            sum/=n;
            bool flag=true;
            int amount=0;
            for(int i=0;i<n;i++){
                amount+=(v[i]-sum);
                if(amount<0){
                    flag=false;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(flag) cout<<"YES"<<endl;
        }
    }
    return 0;
}