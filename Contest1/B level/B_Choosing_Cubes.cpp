#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll n,f,k,j,fav;
        cin>>n>>f>>k;
        f=f-1;
        k=k-1;
        vector<ll> a;
        a.reserve(n);
        for(int i=0;i<n;i++){
            cin>>j;
            a.push_back(j);
        }
        fav=a[f];
        sort(a.begin(),a.end(),greater<int>());
        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        // cout<<k<<endl;
        // cout<<fav<<endl;
        if(a[k]>fav){
            cout<<"NO"<<endl;
        }
        else if(a[k]==fav && a[k+1]==fav){
            cout<<"MAYBE"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}