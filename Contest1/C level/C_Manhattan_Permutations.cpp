#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// ll man(vector<ll> vec){
//     ll sum=0;
//     for(auto ele: vec){
        
//     }
// }
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll n,k;
        cin>>n>>k;
        if(k%2==1){
            cout<<"No"<<endl;
            continue;
        }
        if(n%2==0){
            if(k>n*n/2){cout<<"No"<<endl;continue;}
            else{cout<<"Yes"<<endl;}
        }
        if(n%2==1){
            if(k>(n*n-1)/2){cout<<"No"<<endl;continue;}
            else{cout<<"Yes"<<endl;}
        }
        vector<ll> v;
        v.reserve(n);
        for(int i=1;i<n+1;i++){
            v.push_back(i);
        }
        int i=0;
        
        ll m=n;
        
        
        
        if(k%4==0 && n%2==1){
        while(true){
            if(k>=2*(n-2*i-1)){
                ll temp=v[i];
                v[i]=v[n-i-1];
                v[n-i-1]=temp;
                k-=2*(n-2*i-1);
            }
            i++;
            if(i>n/2+1){break;}
            // if(k==2){
            //     ll temp=v[n/2];
            //     v[n/2]=v[n/2 +1];
            //     v[n/2+1]=temp;
            //     break;
            // }
            if(k==0){break;}
        }
        }
        if(k%4==2 && n%2==0){
        while(true){
            if(k>=2*(n-2*i-1)){
                ll temp=v[i];
                v[i]=v[n-i-1];
                v[n-i-1]=temp;
                k-=2*(n-2*i-1);
            }
            i++;
            if(i>n/2+1){break;}
            // if(k==2){
            //     ll temp=v[n/2];
            //     v[n/2]=v[n/2 +1];
            //     v[n/2+1]=temp;
            //     break;
            // }
            if(k==0){break;}
        }
        }
        
        
        
        if(k%4==2 && n%2==1){
        m-=1;
        while(true){
            if(k>=2*(m-2*i-1)){
                ll temp=v[i];
                v[i]=v[m-i-1];
                v[m-i-1]=temp;
                k-=2*(m-2*i-1);
            }
            i++;
            if(i>n/2+1){break;}
            // if(k==2){
            //     ll temp=v[n/2];
            //     v[n/2]=v[n/2 +1];
            //     v[n/2+1]=temp;
            //     break;
            // }
            if(k==0){break;}
        }
        }


        if(k%4==0 && n%2==0){
        m-=1;
        while(true){
            if(k>=2*(m-2*i-1)){
                ll temp=v[i];
                v[i]=v[m-i-1];
                v[m-i-1]=temp;
                k-=2*(m-2*i-1);
            }
            i++;
            if(i>n/2+1){break;}
            // if(k==2){
            //     ll temp=v[n/2];
            //     v[n/2]=v[n/2 +1];
            //     v[n/2+1]=temp;
            //     break;
            // }
            if(k==0){break;}
        }
        }

        for(int i=0;i<n-1;i++){
            cout<<v[i]<<" ";
        }
        cout<<v[n-1]<<endl;
    }
}