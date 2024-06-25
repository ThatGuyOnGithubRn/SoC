#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll n,j,max=0,sum=0,indexi;
        cin>>n;
        vector<int> arr;
        arr.reserve(n);
        for(int i=0;i<n;i++){
            cin>>j;
            arr.push_back(j);
        }
        for(int i=0;i<n;i++){
            if(arr[i]>=max){max=arr[i];indexi=i;}
            if(arr[i]==0){sum+=max;max=0;arr[indexi]=-1;arr[i]=-1;i=-1;}
        }
        // for(int i=0;i<n;i++){
        //     cout<<arr[i];
        // }
        cout<<sum<<endl;
    }
    
}