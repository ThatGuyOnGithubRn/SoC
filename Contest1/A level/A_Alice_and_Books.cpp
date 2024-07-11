#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll n,j;
        cin>>n;
        ll maxi=0,last=0;
        for(int i=0;i<n-1;i++){
            cin>>j;
            maxi = max(maxi,j);
            last=j;
        }
        cin>>j;
        last=j;
        ll sum=last+maxi;
        cout<<sum<<endl;
    }
}