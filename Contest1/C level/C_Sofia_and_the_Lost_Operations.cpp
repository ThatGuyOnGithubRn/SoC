#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll n,m,k,j;
        cin>>n;
        bool canBeTrue=true,noout=false;
        vector<int> a;
        a.reserve(n);
        for(int i=0;i<n;i++){
            cin>>j;
            a.push_back(j);
        }
        vector<int> b;
        b.reserve(n);
        for(int i=0;i<n;i++){
            cin>>j;
            b.push_back(j);
        }
        cin>>m;
        vector<int> d;
        d.reserve(m);
        for(int i=0;i<m;i++){
            cin>>j;
            d.push_back(j);
        }
        vector<ll> v;
        v.reserve(n);
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                // cout<<i<<" ";
                v.push_back(b[i]);    
                // for(int k=0;k<m;k++){
                //     if(d[k]==b[i]){
                //         v.pop_back();
                //         d[k]==-1;
                //         canBeTrue=false;
                //         break;
                //     }
                // }    
                // if(canBeTrue==true){
                //     cout<<"NO"<<endl;
                //     noout=true;
                // }
                // canBeTrue=true;
            }
        }
        // for(int i=0;i<m;i++){
        //     cout<<d[i]<<" ";
        // }
        // cout<<endl;
        // for(auto i=v.begin();i<v.end();i++){
        //     cout<<*i<<" ";
        // }
        // cout<<endl<<endl;
        for(auto i=v.begin();i<v.end();i++){
            for(int l=0;l<m;l++){
                canBeTrue==false;
                if(*i==d[l]){
                    canBeTrue=true;
                    if(v.end()>i){i++;}
                    else{break;}
                }
            }
            if(canBeTrue==false){cout<<"NO"<<endl;}
            break;
        }
    }
}