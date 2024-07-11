#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        bool no=true;
        ll j,n,num2;
        cin>>n;
        vector<ll> a;
        a.reserve(n);
        for(int i=0;i<n;i++){
            cin>>j;
            a.push_back(j);
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(a[i]%a[0]!=0){num2=i;break;}
        }
        for(int i=0;i<n;i++){
            if(a[i]%a[0]!=0 && a[i]%a[num2]!=0){cout<<"No"<<endl;no=false;break;}
        }
        if(no==true) cout<<"Yes"<<endl;
    }
}



