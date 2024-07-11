#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,k,j;
    cin>>n>>k;
    ll arr[101]={0};
    for(int i=0;i<n;i++){
        cin>>j;
        arr[j-1]++;
    }
    // for(int i=0;i<100;i++){
    //     cout<<arr[i];
    // }
    // cout<<endl;
    sort(arr,arr+100);
    reverse(arr,arr+100);


    // for(int i=0;i<100;i++){
    //     cout<<arr[i];
    // }
    // cout<<endl;
    ll n2=n;
    while(true){
        if(arr[0]>=k && arr[1]<arr[0]-(k-1)){
            arr[0]--;
            n2--;
        }
        else if(arr[0]>=k && arr[1]>=arr[0]-(k-1)){
            arr[0]-=k;
            arr[1]+=(k-1);
            sort(arr,arr+100);
            reverse(arr,arr+100);
            n2--;
        }
        else{break;}
        // for(int i=0;i<100;i++){
        //     cout<<arr[i];
        // }
        // cout<<endl;
    }
    cout<<n2<<endl;
}
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        solve();
    }
}