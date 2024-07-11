#include<bits/stdc++.h>
using namespace std;
int main(){
    bool no=false;
    int test;
    cin>> test;
    while(test--){
        bool no=false;
        int n,m,k,c=0;
        cin>>n;
        vector <int> a(n);
        for(int l=0;l<n;l++) {
            cin>>a[l];
        }
        vector<int> b(n);
        for(int i=0;i<n-2;i++){
            while(a[i]>0){
                a[i]--;
                a[i+1]-=2;
                a[i+2]--;
            }
            if(a[i+1]<0 || a[i+2]<0){no=true;cout<<"NO"<<endl;break;}
        }
        for(int j=0;j<n;j++){
            if(no==false && a[j]!=0){cout<<"NO"<<endl;no=true;break;}
        }
        if(no==false){cout<<"YES"<<endl;}
    }
}   