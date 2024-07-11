#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    // cout<<s<<endl;
    for(auto i:s){
        if(i==s[0]){cout<<i;}
    }
    cout<<endl;
}
int32_t main(){
    // ll test;
    // cin>> test;
    // // max value of element is less than 10^6
    // while(test--){
        solve();
    // }
}