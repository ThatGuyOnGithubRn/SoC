#include<bits/stdc++.h>
using namespace std;



int main(){
    int test;
    cin>> test;
    while(test--){
        int n,m,x,outcount=0;
        int dist,out=x,num=1;
        char c;
        cin>>n>>m>>x;
        vector<int> distarr(m);
        vector<int> outarr(n,x);
        unordered_map<int,int> mp;
        for(int i=0;i<m;i++){
            cin>>dist>>c;
            
            
            distarr[i]=dist;
            
            
            if(c=='0'){
                for(int i=0;i<n;i++){
                    outarr[i]=(out+dist+2*n)%n;
                }
            }
            else if(c=='1'){
                for(int i=0;i<n;i++){
                    outarr[i]=(out-dist+2*n)%n;
                }
            }
            else{
                outarr[outcount]=(out+dist)%n;
                outarr[outcount+1]=(out-dist)%n;
                outcount+=2;
            }
        }
        sort(outarr.begin(), outarr.end());
        for(int i=0;i<n-1;i++){
            if(outarr[i]!=outarr[i+1]){
                cout << outarr[i]<<endl;
            }
        } 
    }
}