#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,k,maxi=-10000000000,mini=1000000000,fini=0;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(k>2){
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);
        }
        cout<<maxi;
    }
    else if(k==1){
        for(int i=0;i<n;i++){
            mini=min(mini,arr[i]);
        }
        cout<<mini;
    }
    else{
        if(arr[0]>arr[n-1]){cout<<arr[0];}
        else{cout<<arr[n-1];}
    }
}
int32_t main(){
    // ll test;
    // cin>> test;
    // // max value of element is less than 10^6
    // while(test--){
        solve();
//    }
}