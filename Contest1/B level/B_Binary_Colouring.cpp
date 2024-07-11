#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll x,n,count=0;
        cin>>x;
        n=x;
        vector<int> bin;
        while(x>1){
            bin.push_back(x%2);
            // cout<<x<<endl;
            x/=2;
            count++;
        }
        bin.push_back(1);
        count++;
        for(int i=0;i<count-2;i++){
            if(bin[i]==1 && bin[i+1]==1 && bin[i+2]==0){
                bin[i]=-1;
                bin[i+1]=0;
                bin[i+2]=1;
            }
        }
        if(bin[count-2]==1 && bin[count-1]==1){
            bin.push_back(1);
            bin[count-2]=-1;
            bin[count-1]=0;
            count++;
        }
        for(int i=0;i<count-2;i++){
            if(bin[i]==1 && bin[i+1]==-1){
                bin[i]=-1;
                bin[i+1]=0;
                i=-1;
            }
        }
        cout<<count<<endl;
        for(auto i=bin.begin();i!=bin.end();i++){
            cout<<*i<<" ";
        }
        cout<<endl;
    }
}