#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,k,j=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        j++;
        arr[i]=i+j;
    }
    if(n%2==1){cout<<"No"<<endl;return;}
    else{
        cout<<"Yes"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" "<<2*n-1-arr[i]<<endl;
        }
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