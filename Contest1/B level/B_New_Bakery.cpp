#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll n,a,b;
        cin>>n>>a>>b;
        if(b<a){cout<<n*a<<endl;}
        else if(n-b+a-1>0){cout<<(a+b)*(b-a+1)/2+(n-b+a-1)*a<<endl;}
        else{cout<<(b+b-n+1)*n/2<<endl;}
    }
}