#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll n,j;
        bool tru=false;
        cin>>n;
        vector<int> arr,arrcopy,arrsort;
        arr.reserve(n);
        arrcopy.reserve(n);
        arrsort.reserve(n);
        for(int i=0;i<n;i++){
            cin>>j;
            arr.push_back(j);
        }
        arrcopy.resize(n);
        arrsort.resize(n);
        for(int k=0;k<n;k++){
            arrsort[k]=arr[k]; 
            arrcopy[k]=arr[k]; 
        }
        sort(arrsort.begin(),arrsort.end());
        for(int d=0;d<n;d++){
            arrcopy=arr;
            // Reverse the first k elements
            reverse(arrcopy.begin(), arrcopy.begin() + d);
        
            // Reverse the remaining n-k elements
            reverse(arrcopy.begin() + d, arrcopy.end());
        
            // Reverse the entire array
            reverse(arrcopy.begin(), arrcopy.end());
            
            if(arrcopy==arrsort){cout<<"Yes"<<endl;tru=true;break;}
        }
        if(tru==false){cout<<"No"<<endl;}
    }

}