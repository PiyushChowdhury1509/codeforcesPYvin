#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<limits.h>
using namespace std;

int main(){
    vector<int>v(200001,0);
    for(int i=1;i<=200000;i++){
        int num=i;
        int number=0;
        while(num>0){
            number+=(num%10);
            num/=10;
        }
        v[i]=number+v[i-1];
    }
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        cout<<v[n]<<endl;
    }
    return 0;
}