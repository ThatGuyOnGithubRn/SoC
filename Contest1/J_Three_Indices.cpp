#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll n,j;
        bool found=false;
        cin>>n;
        vector<int> arr;
        arr.reserve(n);
        for(int i=0;i<n;i++){
            cin>>j;
            arr.push_back(j);
        }
        int minin=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){minin=i;break;}
        }
        for(int i=minin+1;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                cout<<"YES"<<endl<<minin+1<<" "<<i+1<<" "<<i+2<<endl;
                found=true;
                break;
            }
        }
        if(found==false){
        for(int i=minin;i>0;i--){
            if(arr[i]>arr[i-1]){
                cout<<"YES"<<endl<<i<<" "<<i+1<<" "<<minin+1<<endl;
                found=true;
                break;
            }
        }
        }
        if(found==false){cout<<"NO"<<endl;}
        // vector<int> brr;
        // brr.reserve(n);
        // for(int i=0;i<n;i++){
        //     j=arr[i];
        //     brr.push_back(j);
        // }
        // sort(brr.begin(),brr.ene());
    }
    
}