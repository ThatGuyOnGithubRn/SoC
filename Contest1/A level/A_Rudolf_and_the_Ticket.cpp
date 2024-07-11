#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>> test;
    while(test--){
        int n,m,k,c=0;
        cin>>n>>m>>k;
        vector <int> a(n);
        vector <int> b(m);
        for(int l=0;l<n;l++) cin>>a[l];
        for(int o=0;o<m;o++) cin>>b[o];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i]+b[j]<=k){
                    c++;
                    
                }
            }
        }
        cout<<c<<endl;
    }
}