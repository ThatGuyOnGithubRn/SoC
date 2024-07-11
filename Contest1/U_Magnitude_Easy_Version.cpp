#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll n;
        cin>>n;
        ll arr[n];
        ll mini=0,maxi=0,mini2;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        // for(ll i=0;i<n;i++){
        //     cout<<arr[i];
        // }
        if(n==1){if(arr[0]<0){cout<<-arr[0]<<endl;continue;}}
        for(ll i=0;i<n;i++){
            // cout<<maxi<<endl;
            // cout<<mini<<endl;
            mini2=mini+arr[i];
            maxi=max(maxi+arr[i],-mini-arr[i]);
            mini=mini2;
        }
        cout<<maxi<<endl;
    }
}