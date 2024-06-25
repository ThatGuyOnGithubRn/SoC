#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll n,j;
    cin>>n;
    vector<ll> v;
    v.reserve(n);
    vector<ll> a;
    a.reserve(n-1);
    vector<ll> b;
    b.reserve(n-1);
    for(int i=0;i<n;i++){
        cin>>j;
        v.push_back(j);
    }
    for(int i=0;i<n-1;i++){
        cin>>j;
        a.push_back(j);
    }
    for(int i=0;i<n-2;i++){
        cin>>j;
        b.push_back(j);
    }
    sort(v.begin(),v.end());
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<n-1;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    
    for(int i=0;i<n;i++){
        if(v[i]!=a[i]){cout<<v[i]<<endl;break;}
    }
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){cout<<a[i]<<endl;break;}
    }




    // UHGIEFJPehidfc bebjlcbk swmbjldc b2wlk; EERRRORRRRRRRR CODDEEEEEE SAMMEEEEEEE in test cqse so find gets fucked

    // for(int i=0;i<n-1;i++){
    //     if(find(b.begin(),b.end(),a[i])==b.end()){
    //         cout<<a[i]<<endl;
    //     }
    // }
}