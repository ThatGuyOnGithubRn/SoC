#include<bits/stdc++.h>
using namespace std;
int main(){
    bool no=false;
    int test;
    cin>> test;
    while(test--){
        bool no=false;
        int n,count=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n-2;i++){
            if(s.substr(i, 5)=="mapie"){
                count--;
            }
            if((s.substr(i, 3)=="map")||s.substr(i, 3)=="pie"){
                count++;
            }
        }
        cout<<count<<endl;
    }
}