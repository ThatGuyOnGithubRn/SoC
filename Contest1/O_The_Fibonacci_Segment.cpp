#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test,j,ser=0,sermax=0;
    cin>> test;
    vector<ll> a;
    vector<ll> b;
    a.reserve(test);
    b.reserve(test);
    for(ll i=0;i<test;i++){
        cin>>j;
        a.push_back(j);
        if(i<=1){b.push_back(-1);}
        else{b.push_back(a[i-1]+a[i-2]);}
        // cout<<j;
    }
    for(int i=0;i<test;i++){
        if(b[i]==a[i] && b[i]!=-1){ser++;sermax=max(sermax,ser);}
        else{ser=0;}
    }
    // for(int i=0;i<test;i++){
    //     cout<<b[i]<<" ";
    // }
    ll seq;
    if(test==0){seq=0;}
    if(test==1){seq=1;}
    if(test>=2){seq=2;}
    seq+=sermax;
    cout<<seq<<endl;
}