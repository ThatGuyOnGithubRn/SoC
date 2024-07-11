#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll x,y,x2,y2;
        cin>>x>>y;
        cin>>x2>>y2;
        if(x>y){if(x2<=y2){cout<<"NO"<<endl;}else{cout<<"YES"<<endl;}}
        else if(x<y){if(y2<=x2){cout<<"NO"<<endl;}else{cout<<"YES"<<endl;}}
        else{cout<<"NO"<<endl;}
    }
}