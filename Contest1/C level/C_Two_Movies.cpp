#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll a,j;
        cin>>a;
        vector<ll> m1,m2;
        m1.reserve(a);
        m2.reserve(a);
        ll l1=0,h1=0,n1=0,l2=0,h2=0,n2=0;
        for(ll i=0;i<a;i++){
            cin>>j;
            if(j==1){l1++;}
            if(j==-1){h1++;}
            if(j==0){n1++;}
            m1.push_back(j);
        }
        for(ll i=0;i<a;i++){
            cin>>j;
            if(j==1){l2++;}
            if(j==-1){h2++;}
            if(j==0){n2++;}
            m2.push_back(j);
        }
        ll r1=0,r2=0;
        for(ll i=0;i<a;i++){
            if(m1[i]==-1 && m2[i]==1){r2++;}
            if(m1[i]==1 && m2[i]==-1){r1++;}
            if(m1[i]==0 && m2[i]==1){r2++;}
            if(m1[i]==1 && m2[i]==0){r1++;}
        }
        for(ll i=0;i<a;i++){
            if(m1[i]==1 && m2[i]==1){if(r1>r2){r2++;}else{r1++;}}
            if(m1[i]==-1 && m2[i]==-1){if(r1>r2){r1--;}else{r2--;}}
        }
        cout<<min(r1,r2)<<endl;
    }
}