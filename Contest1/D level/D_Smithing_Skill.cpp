#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    // ll test;
    // cin>> test;
    // // max value of element is less than 10^6
    // while(test--){
        ll n,m,j;
        cin>>n>>m;
        vector<ll> a,c;
        vector<pair<ll,ll>> v;
        v.reserve(n);
        a.reserve(n);

        ll mini=INT16_MAX,maxi=0;
        c.reserve(m);
        for(ll i=0;i<n;i++){
            cin>>j;
            a.push_back(j);
        }
        for(ll i=0;i<n;i++){
            cin>>j;
            v.push_back(make_pair(a[i]-j,a[i]));
        }
        sort(v.begin(),v.end());
        // for(ll i=0;i<n;i++){
        //     cout<<v[i].first<<" "<<v[i].second<<" ";
        // }
        // cout<<endl;
        for(ll i=0;i<m;i++){
            cin>>j;
            c.push_back(j);
        }
        ll count=0;
        j=0;
        for(ll i=0;i<m;i++){
            if(j==n){j=0;continue;}
            if(c[i]>=v[j].second){
                c[i]-=v[j].first;
                count++;
                i--;
            }
            else{j++;i--;}
        }
        cout<<count*2<<endl;
}