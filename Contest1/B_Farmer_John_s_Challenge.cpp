#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll l,n,k,i=0;
        cin>>n>>k;
        if(n==k){n=n-1;while(n--){cout<<"1 ";}cout<<"1"<<endl;}
        else if(k>1){cout<<"-1"<<endl;}
        else{while(i<n){cout<<i+1<<" ";i++;}cout<<endl;}

    }

}