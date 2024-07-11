#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,qw,maxi,fini=0;
    cin>>n>>maxi;
    ll arr[n];
    // cout<<0<<" ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int arr2[i];
        for(int k=0;k<i;k++){
            arr2[k]=arr[k];
        }
        ll qw=arr[i];
        // cout<<qw<<" ";
        sort(arr2,arr2+i);
        for(int j=0;j<i;j++){
            if(qw+arr2[j]<=maxi){qw+=arr2[j];}
            else{fini++;}
        }
        // if(arr2[0]==qw){fini++;}
        // cout<<endl<<qw<<" ";
        // cout<<endl;
        // cout<<endl;
        cout<<fini<<" ";
        fini=0;
    }
    cout<<endl;
}
int32_t main(){
    // ll test;
    // cin>> test;
    // // max value of element is less than 10^6
    // while(test--){
        solve();
//    }
}