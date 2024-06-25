#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int gcd(int a,int b){
    if(a%b==0){return b;}
    else{return gcd(b,a%b);}
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll x,y,ld=2;
        cin>>x>>y;
        int lcmv=lcm(x,y);
        int gcdv=gcd(x,y);
        if(x>y){
            int temp=x;
            x=y;
            y=temp;
        }
        if(x==1){cout<<y*y<<endl;}
        else if(lcmv!=y){
            cout<<lcmv<<endl;
        }
        else{
            while(true){
                if(x%ld==0 || y%ld==0){
                    break;
                }
                else{
                    ld++;
                }
            }
            cout<<lcmv*ld<<endl;
        }
    }

}