#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll m=sqrt(a*b*c);
    cout<<4*((m/a)+(m/b)+(m/c));
}