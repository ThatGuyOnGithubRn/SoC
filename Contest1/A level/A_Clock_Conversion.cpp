#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        string s,x;
        cin>> s;
        string h,m;
        h= s.substr(0,2);
        m= s.substr(3,2);
        int hh = stoi(h);
        if(hh<12){x=" AM";}
        if(hh/13==1){hh-=12;x=" PM";}
        if(hh==12){x=" PM";}
        if(hh==0){hh=12;x=" AM";}
        if(hh>=10){cout<<hh<<':'<<m<<x<<endl;}
        else{cout<<'0'<<hh<<':'<<m<<x<<endl;}
        // if(h/12==1){x=" PM";}
        // else{x=" AM";}
        // cout<<fin;
    }

}