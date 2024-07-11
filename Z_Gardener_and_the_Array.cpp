#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,k,x;
    cin>>n;
    map<ll,ll> m;
    vector<vector<ll>> c(n);
    for(ll i=0;i<n;i++){
        cin>>x;    
        c[i].resize(x);
        for(ll j=0;j<x;j++){
            cin>>c[i][j];
            m[c[i][j]]++;
        }
    }
    
    for(ll i=0;i<n;i++){
        bool nootherset=false;
        for(auto j:c[i]){
            if(m[j]==1){
                nootherset=true;
            }
        }
        if(nootherset==false){
            cout<<"Yes"<<endl;
            return;
        }
    }





    // ll bit=0;
    // vector<ll> c(n);
    // for(ll i=0;i<n;i++){
    //     cin>>x; 
    //     for(int i=0;i<x;i++){   
    //         cin>>k;
    //         c[i]+=pow(2,k);
    //     }
    //     bit=bit|c[i];
    // }
    // ll j=0,bit2=0;
    // while(j!=n){
    //     for(ll i=0;i<n;i++){
    //         if(i!=j){
    //             bit2=bit2|c[i];
    //         }
    //     }
    //     j++;
    //     if(bit2==bit){cout<<"Yes"<<endl;return;}
    //     bit2=0;
    // }
    // cout<<"No"<<endl;return;
    for(ll i=0;i<n;i++){
        bool nootherset=false;
        for(auto j:c[i]){
            if(m[j]==1){
                nootherset=true;
            }
        }
        if(nootherset==false){
            cout<<"Yes"<<endl;
            return;
        }
    }










    cout<<"No"<<endl;return;
}
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        solve();
   }
}