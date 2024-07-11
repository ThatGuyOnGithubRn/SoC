#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll n,j,k,removeIndex=INT_MIN;
        bool coutno=false,lessthanonce=true;
        cin>>n;
        vector<ll> a;
        a.reserve(n);
        for(int i=0;i<n;i++){
            cin>>j;
            a.push_back(j);
        }
        vector<ll> b;
        b.reserve(n-1);
        for(int i=0;i<n-1;i++){
            j= __gcd(a[i],a[i+1]);
            b.push_back(j);
        }
        for(int i=0;i<n-1;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        // cout<<endl;

        for(int i=0;i<n;i++){
            vector<ll> sav;
            sav.reserve(n-1);
            vector<ll> sav2;
            sav2.reserve(n-1);
            for(int j=0;j<n;j++){
                
                if(i!=j-1 && i!=j){
                    sav.push_back(__gcd(a[i],a[i+1]));
                    sav2.push_back(__gcd(a[i],a[i+1]));
                }
                if(i==j-1){
                    sav.push_back(__gcd(a[i],a[i+2]));
                    sav2.push_back(__gcd(a[i],a[i+2]));
                }
            }
            sort(sav.begin(),sav.end());
            if(sav==sav2){
                cout<<"YES"<<endl;
            }
        }
        // cout<<endl;
        
    }
}