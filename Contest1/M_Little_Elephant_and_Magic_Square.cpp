#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    // ll test;
    ll c;
    ll sum=0;
    bool yes=false;
    // cin>> test;
    // max value of element is less than 10^6
    // while(test--){
    // vector<ll,ll> v{4,4};
    vector<vector<ll>> vec(3);
    for(int i=0;i<3;i++){
        vec[i] = vector<ll>(3);
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>c;
            vec[i][j]=c;
            sum+=c;
            // cout<<"hi"<<endl;
            // cout<<vec[i][j];
        }
    }
    sum/=2;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){vec[i][i]=sum-vec[i][(i+1)%3]-vec[i][(i+2)%3];}
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}