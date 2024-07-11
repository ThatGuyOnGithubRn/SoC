#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back;
#define mp make_pair;
#define fr(i,str,end) for(int i=str;i<end;i++)
typedef vector<ll> vl;
typedef pair<ll,ll> pl;
int32_t main(){
    // increases efficiency
    // ll test;
    // cin>> test;
    // while(test--){
        ll n,l,j;
        cin>>n>>l;
        vector<ll> a;
        a.reserve(n);
        for(int i=0;i<n;i++){
            cin>>j;
            a.push_back(j);
        }
        sort(a.begin(),a.end());
        // for(int i=0;i<n;i++){
        //     cout<<a[i];
        // }
        // cout<<endl;
        double dist=0;
        // cout<<l;
        if(n!=1){
        for(int j=0;j<n;j++){
            // cout<<dist<<" "<<a[j]<<endl;
            if(j==0){dist=max(double(a[0]),double(a[1]-a[0])/2);}
            else if(j<n-1){dist=max(dist,(double(a[j]-a[j-1]))/2);}
            else{dist=max(max(dist,double(l-a[j])),double(a[j]-a[j-1])/2);}
            // cout<<dist<<" "<<a[j]<<endl;
        }
        }
        else{
            dist=max(a[0],l-a[0]);
        }
        cout << fixed  << setprecision(10) << dist;
    // }
}