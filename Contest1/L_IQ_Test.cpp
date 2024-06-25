#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    // ll test;
    char c;
    int sum;
    bool yes=false;
    // cin>> test;
    // max value of element is less than 10^6
    // while(test--){
    // vector<ll,ll> v{4,4};
    vector<vector<int>> vec(4);
    for(int i=0;i<4;i++){
        vec[i] = vector<int>(4);
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>c;
            if(c=='#'){
            vec[i][j]=0;
            }
            else{
            vec[i][j]=1;
            }
            // cout<<"hi"<<endl;
            // cout<<vec[i][j];
        }
    }


    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum+=vec[i][j]+vec[i+1][j]+vec[i+1][j+1]+vec[i][j+1];
            if(sum!=2){cout<<"YES"<<endl;yes=true;}
            if(yes==true){break;}
            sum=0;
        }
        // cout<<endl;
        if(yes==true){break;}
    }
    if(yes==false){cout<<"NO"<<endl;}
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<vec[i][j];
    //     }
    //     cout<<endl;
    // }
}