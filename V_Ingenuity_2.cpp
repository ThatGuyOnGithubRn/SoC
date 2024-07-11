#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll N;
    string s,output;
    cin>>N>>s;
    if(N%2){cout<<"NO"<<endl;return;}
    ll n=0,e=0;
    for(auto i : s){
        if(i=='N'){n++;}
        if(i=='S'){n--;}
        if(i=='E'){e++;}
        if(i=='W'){e--;}
    }
    char nn='N',ss='S',ee='E',ww='W';
    if(N==2){if(n!=2 && n!=-2 && e!=2 && e!=-2){cout<<"NO"<<endl;return;}}
    if(n%2){cout<<"NO"<<endl;return;}
    if(n<0){ss='N';nn='S';n*=-1;}
    if(e<0){ee='W';ww='E';e*=-1;}
    n/=2;
    e/=2;
    ll a=1000000,b=1000000;
    if(find(s.begin(),s.end(),'N')==s.end() && find(s.begin(),s.end(),'S')==s.end()){
        if(e==0){
            for(auto i:s){
            //all r
            if(i==ee && a%2==0){
                cout<<'H';
            }
            if(i==ee && a%2==1){
                cout<<'R';
            }
            if(i==ww && b%2==0){
                cout<<'H';
            }
            if(i==ww && b%2==1){
                cout<<'R';
            }
            if(i==ww){b--;}
            if(i==ee){a--;}
            }
            cout<<endl;
            return;
        }
        
    }
    if(find(s.begin(),s.end(),'E')==s.end() && find(s.begin(),s.end(),'W')==s.end()){
        if(n==0){
            for(auto i :s){
            //all h
            if(i==nn && a%2==0){
                cout<<'H';
            }
            if(i==nn && a%2==1){
                cout<<'R';
            }
            if(i==ss && b%2==0){
                cout<<'H';
            }
            if(i==ss && b%2==1){
                cout<<'R';
            }
            if(i==ss){b--;}
            if(i==nn){a--;}
            }
            cout<<endl;
            return;
        }
        
    }
    for(auto i : s){
        if(i==ss){
            cout<<'H';
        }
        if(i==ww){
            cout<<'R';
        }
        if(i==nn){
            if(n){
                n--;
                cout<<'R';
            }
            else{cout<<'H';}
        }
        if(i==ee){
            if(e){
                e--;
                cout<<'H';
            }
            else{cout<<'R';}
        }
    }
    cout<<endl;return;
    
}
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        // bool rthere=false;
        // bool hthere=false;
        // ll n,u=0,l=0;
        // cin>>n;
        // string s;
        // cin>>s;
        // string outs="";
        // for(auto i: s){
        //     if(i=='N'){u++;}
        //     else if(i=='S'){u--;}
        //     else if(i=='E'){l++;}
        //     else if(i=='W'){l--;}
        // }
        // ll u2=u,l2=l;
        // for(auto i:s){
        //     if(u>=0 && l>=0){
        //         if(i=='S'){outs+='H';}
        //         if(i=='N' && u2>0){outs+='R';u2--;}
        //         else if(i=='N' && u2==0){outs+='H';}
        //         if(i=='W'){outs+='H';}
        //         if(i=='E' && l2>0){outs+='R';l2--;}
        //         else if(i=='E' && l2==0){outs+='H';}
        //     }
        //     if(u<0 && l>=0){
        //         if(i=='N'){outs+='H';}
        //         if(i=='S' && u2>0){outs+='R';u2--;}
        //         else if(i=='S' && u2==0){outs+='H';}
        //         if(i=='W'){outs+='H';}
        //         if(i=='E' && l2>0){outs+='R';l2--;}
        //         else if(i=='E' && l2==0){outs+='H';}
        //     }
        //     if(u<0 && l<0){
        //         if(i=='N'){outs+='H';}
        //         if(i=='S' && u2>0){outs+='R';u2--;}
        //         else if(i=='S' && u2==0){outs+='H';}
        //         if(i=='E'){outs+='H';}
        //         if(i=='W' && l2>0){outs+='R';l2--;}
        //         else if(i=='W' && l2==0){outs+='H';}
        //     }
        //     if(u>=0 && l<0){
        //         if(i=='S'){outs+='H';}
        //         if(i=='N' && u2>0){outs+='R';u2--;}
        //         else if(i=='N' && u2==0){outs+='H';}
        //         if(i=='E'){outs+='H';}
        //         if(i=='W' && l2>0){outs+='R';l2--;}
        //         else if(i=='W' && l2==0){outs+='H';}
        //     }
        // }
        // for(auto i : outs){
        //     if(i=='R'){rthere=true;}
        //     if(i=='H'){hthere=true;}
        // }
        // cout<<outs<<endl;
        // if(l%2==0 && u%2==0 && rthere && hthere){cout<<outs<<endl;}
        // else{cout<<"NO"<<endl;}
        solve();
    }
}