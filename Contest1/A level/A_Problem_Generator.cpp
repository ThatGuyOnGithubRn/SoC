#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll n,m,A=0,B=0,C=0,D=0,E=0,F=0,G=0;
        cin>>n>>m;
        string a;
        cin>>a;
        for(int i=0;i<n;i++){
            if(a[i]=='A'){
                A++;
            }
            if(a[i]=='B'){
                B++;
            }
            if(a[i]=='C'){
                C++;
            }
            if(a[i]=='D'){
                D++;
            }
            if(a[i]=='E'){
                E++;
            }
            if(a[i]=='F'){
                F++;
            }
            if(a[i]=='G'){
                G++;
                // cout<<G;
            }
        }
        ll sum=0;
        if(A<m){
            // cout<<A<<"A";
            sum+=m-A;
        }
        if(B<m){
            // cout<<B<<"B";
            sum+=m-B;
        }
        if(C<m){
            // cout<<C<<"C";
            sum+=m-C;
        }
        if(D<m){
            // cout<<D<<"D";
            sum+=m-D;
        }
        if(E<m){
            // cout<<E<<"E";
            sum+=m-E;
        }
        if(F<m){
            // cout<<F<<"F";
            sum+=m-F;
        }
        if(G<m){
            // cout<<G<<"G";
            sum+=m-G;
        }
        cout<<sum<<endl;
        // min=INT_MAX;
        // if(A<min){
        //     min=A;
        // }
        // if(B<min){
        //     min=B;
        // }
        // if(C<min){
        //     min=C;
        // }
        // if(D<min){
        //     min=D;
        // }
        // if(E<min){
        //     min=E;
        // }
        // if(F<min){
        //     min=F;
        // }
        // if(G<min){
        //     min=G;
        // }
        
    }
}