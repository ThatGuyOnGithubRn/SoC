#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll n;
        cin>>n;
        ll z=n/26;
        string alp="abcdefghijklmnopqrstuvwxyz";
        if(n<=27){cout<<"aa";cout<<alp[n-3]<<endl;}
        else if(n<=53){cout<<"a";cout<<alp[n-28]<<"z"<<endl;}
        else{cout<<alp[n-53]<<"zz"<<endl;}
    }

}