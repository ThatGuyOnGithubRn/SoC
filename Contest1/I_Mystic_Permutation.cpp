#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll n,j;
        cin>>n;
        vector<int> arr;
        arr.reserve(n);
        for(int i=0;i<n;i++){
            cin>>j;
            arr.push_back(j);
        }
        vector<int> arrs;
        arrs.reserve(n);
        for(int i=0;i<n;i++){
            j=arr[i];
            arrs.push_back(j);
        }
        sort(arrs.begin(),arrs.end());
        if(arr==arrs && n>1){for(int i=0;i<n-1;i++){cout<<arr[i+1]<<" ";}cout<<arr[0]<<endl;continue;}
        vector<int> arrmyst;
        arrmyst.reserve(n);
        for(int i=0;i<n;i++){
            arrmyst.push_back(i+1);
        }
        // cout<<"k";
        if(n>1){
            if(arr[n-1]==arrmyst[n-1]){
                int temp=arrmyst[n-1];
                arrmyst[n-1]=arrmyst[n-2];
                arrmyst[n-2]=temp;
            }    
            for(int i=0;i<n-1;i++){
                if(arr[i]==arrmyst[i]){
                    int temp=arrmyst[i];
                    arrmyst[i]=arrmyst[i+1];
                    arrmyst[i+1]=temp;
                    i=0;
                }
            }
            for(int i=0;i<n-1;i++){
                cout<<arrmyst[i]<<" ";
            }
            cout<<arrmyst[n-1]<<endl;
        }
        else{cout<<"-1"<<endl;}

    }
    
}