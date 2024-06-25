
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main(){
    ll n,m,j;
    cin>>n>>m;
    vector<ll> v;
    v.reserve(n);
    deque<ll> screen;
    // for(ll i=0;i<v.size();i++){
    //     cout<<v[i]<<" "<< i << " ";
    // }
    // cout<<endl;
    for(ll i=0;i<n;i++){
        cin>>j;
        v.push_back(j);
    }
    // for(ll i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // for(ll i=0;i<screen.size();i++){
    //     cout<<screen[i]<<" ";
    // }
    // cout<<endl;
    for(ll i=0;i<m;i++){
        if(i==0){screen.push_back(v[0]);cout<<screen.size()<<" ";continue;}
        if(find(screen.begin(),screen.end(),v[i])==screen.end() && screen.size()!=m){
            screen.push_back(v[i]);cout<<screen.size()<<" ";
        }
        if(find(screen.begin(),screen.end(),v[i])==screen.end() && screen.size()==m){
            screen.pop_back();
            screen.push_front(v[i]);
            cout<<screen.size()<<" ";
        }
    }
    cout<<screen.size()<<endl;
    for(ll i=0;i<screen.size();i++){
        cout<<screen[screen.size()-1-i]<<" ";
    }
    cout<<endl;

}
