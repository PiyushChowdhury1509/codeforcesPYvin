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
        if(n%3==0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    return 0;
}