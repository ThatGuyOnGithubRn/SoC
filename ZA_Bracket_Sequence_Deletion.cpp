#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,c=0;
    cin>>n;
    string s;
    cin>>s;
    ll prop=0,r=n;
    ll p;
    bool checkPal=false;
    ll k=2;
    for(ll i=0;i<s.size()-1;i++){
        if(s[i]=='('){c++;r-=2;i++;}
        else{
            for(ll j=i+1;j<s.size();j++){
                if(s[j]==')'){c++;r-=(j-i+1);i=j; break;}
            }
        }
    }
    cout<<c<<" "<<r<<endl;
}
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        solve();
   }
}