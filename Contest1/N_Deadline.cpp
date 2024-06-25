#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    ll n,d,m;
    // max value of element is less than 10^6
    while(test--){
        bool yes=false;
        bool as=false;
        ll x=0,mini=INT_MAX;
        cin>>n>>d;
        // cout<<n<<d;
        while(true){
            if(d%(x+1)==0){m=x+d/(x+1);}
            else{m=x+d/(x+1)+1;}
            // cout<<m<<' ';
            x++;
            mini=min(mini,m);
            if(mini<=n){cout<<"YES"<<endl;yes=true;break;}
            // if(m<=n){cout<<"YES"<<endl;yes=true;break;}
            if(x>n){break;}
        }
        if(yes==false){cout<<"NO"<<endl;}
        // cout<<endl;
        // if(yes==false){cout<<"NO"<<endl;}
        
    }
}