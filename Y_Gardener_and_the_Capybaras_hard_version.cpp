#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    bool bt=false;
    string s,a,b,c;
    cin>>s;
    ll pa=0;
    ll n=s.size();
    for(ll i=1;i<n-1;i++){
        if(s[i]=='a'){pa=i;break;}
    }
    if(pa){cout<<s.substr(0,pa)<<" "<<s[pa]<<" "<<s.substr(pa+1,n-pa)<<endl;}
    else{cout<<s[0]<<" "<<s.substr(1,n-2)<<" "<<s[n-1]<<endl;}
    // cout<<a<<" "<<b<<" "<<c<<endl;return;

}
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        solve();
   }
}