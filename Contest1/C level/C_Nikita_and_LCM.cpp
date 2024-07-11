#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a,ll b){
    if(a%b==0){return b;}
    else{return gcd(b,a%b);}
}
ll lcm(ll a,ll b){
    return a*b/gcd(a,b);
}
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll n,m,count;
        ll input,store=1,j,lcmofarr=1,val=1;
        vector<ll> v;
        cin>>n;
        m=n;
        v.reserve(n);
        for(ll i=0;i<n;i++){
            cin>>input;
            v.push_back(input);
        }
        // for(ll i=0;i<n;i++){
        //     store=lcm[store,v[i]];
        // }
        bool found=false;
        vector<ll> vc;
        vc.reserve(n);
        for(ll i=0;i<n;i++){
            j=v[i];
            vc.push_back(j);
        }
        while(found==false){
            ll max=*max_element(v.begin(),v.end());
            for(int i=0;i<n;i++){
                lcm(val,v[i]);
            }
            if(max<val){
                cout<<n<<endl;
            }
            vector<ll> facs;
            for(int i=0;i<n;i++){
                if(max/v[i])
            }
            n--;
            val=1;
            // for(int i=0;i<n;i++){
            //     lcmofarr=lcm(lcmofarr,v[i]);
            //     // cout<<lcmofarr<<" ";
            // }
            // // cout<<endl;
            // for(ll i=0;i<m;i++){
            //     cout<<vc[i]<<" "<<lcmofarr<<endl;
            //     if(vc[i]!=lcmofarr){
            //         count++;
            //     }
            // }
            // if(count==m){found=true;cout<<n<<endl;break;}
            // count=0;
            // // for(ll i=0;i<n;i++){
            // //     cout<<v[i]<<" ";
            // // }
            // // cout<<endl;
            // if(n==0){cout<<0<<endl;break;}
            // v.pop_back();
            // n--;
            // lcmofarr=1;

        }
    }
}