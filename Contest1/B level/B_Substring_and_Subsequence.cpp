#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        string a,b;
        cin>>a>>b;
        string c;
        c=a;
        ll l=b.length();
        for(ll i=l-1;i>=0;i--){
            auto k = upper_bound(array,array+n,x)-array;
            if(find(a.begin(),a.end(),b[i])==a.end()){c=b[i]+c;}
            if(find(a.begin(),a.end(),b[i])!=a.end()){break;}
        }
        cout<<c.length()<<endl;
        // string notIn="";
        // bool boo=true;
        // ll k;
        // for(ll i=0;i<l;i++){
        //     if(find(a.begin(),a.end(),b[i])==a.end()){notIn+=b[i];k=i;break;}
        //     // if(boo==false && find(a.begin(),a.end(),b[i])==a.end()){notIn+=b[i];}
        //     cout<<notIn<<endl;
        // }
        // notIn.append(a);
        // cout<<notIn<<endl;
        // for(ll i=k+1;i<l;i++){
        //     if(find(a.begin(),a.end(),b[i])==a.end()){notIn+=b[i];}
        //     cout<<notIn<<endl;
        // }
        // cout<<notIn.length()<<endl;
        // // cout<< notIn <<endl;
    }
}