#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll x,y,k;
        cin>>x>>y>>k;
        ll k2=k;



        ll num=y*((x+k)/y)-(x+k);
        if(num=0){cout<<x+k<<endl;}
        if(num==1){
            x=(x+k)/y;
            while(x%y==0){
                x/=y;
            }
            cout<<x<<endl;
        }
        // if(num>=1){
        //     while(k2--){
        //         x++
        //         while(x%y==0){
        //             x/=y;

        //         }
        //     }
        // }
        // while(k--){
        //     x++;
        //     while(x%y==0){
        //         x/=y;
        //     }
        // }
        // cout<<x<<endl;
    }
}