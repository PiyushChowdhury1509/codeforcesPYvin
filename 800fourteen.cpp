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
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b){
            if(c%2==0) cout<<"Second"<<endl;
            else cout<<"First"<<endl;
        }
        else if(a>b) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    return 0;
}