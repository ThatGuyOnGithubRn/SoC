#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    // ll test;
    // cin>> test;
    // max value of element is less than 10^6
    // while(test--){
    ll k,count=0;
    cin>>k;
    for (ll num=19;num>0;num+=9){
        int sum = 0;
        for (ll i=num;i>0;i=i/10)
            sum = sum + i % 10;
        if (sum == 10)
            count++;
            // cout<<count;
        if (count == k){
            cout<<num<<endl;
            return 0;
        }
    }
}