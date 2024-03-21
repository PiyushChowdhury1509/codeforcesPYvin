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
        int x,k;
        cin>>x>>k;
        if(x%k==0){
            cout<<2<<endl;
            cout<<-1<<" "<<x+1<<endl;
        }
        else{
            cout<<1<<endl;
            cout<<x<<endl;
        }
    }
    return 0;
}