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
        ll arr[n+1];
        arr[n]=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll time=0;
        for(ll i=n-1;i>=0;i--){
            arr[i]=max(arr[i],arr[i+1]+1);
        }
        cout<<arr[0]<<endl;
    }
}