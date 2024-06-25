#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>>test;
    while(test--){
        ll a,b,c,m;
        cin>>a>>b>>c>>m;
        bool no=false;
        if(m>a+b+c-3){no=true;}
        ll maxi=max(max(a,b),c);
        if(2*maxi-a-b-c-1>m){no=true;}
        if(no==true){cout<<"NO"<<endl;}
        if(no==false){cout<<"YES"<<endl;}
    }
}