#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int gcd(int a,int b){
    if(a%b==0){return b;}
    else{return gcd(b,a%b);}
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        int x,y,j;
        cin>>x>>y;
        vector<int> arrx;
        arrx.reserve(x);
        for(int i=0;i<x;i++){
            cin>>j;
            arrx.push_back(j);
        }
        vector<int> arry,arrysort;
        arry.reserve(y);
        for(int i=0;i<y;i++){
            cin>>j;
            arry.push_back(j);
        }
        int min = 100;
        for(int j=0;j<x;j++){
            if(arrx[j]<min){min=arrx[j];}
        }

        // arrcopy.resize(n);
        // arrsort.resize(n);
        // for(int k=0;k<n;k++){
        //     arrsort[k]=arr[k]; 
        //     arrcopy[k]=arr[k]; 
        // }
        // sort(arrsort.begin(),arrsort.end());


        // for(auto i=arr.begin();i!=ssort.end();i++){
        //     if (*i==*(i+1)){
        //         ssort.erase(i);
        //         i--;
        //     }
        // }
        for(int i=0;i<y-1;i++){
            int n=arry[i];
            if(n<min){cout<<n<<" ";}
            else{cout<<min-1<<" ";}
        }
        int n=arry[y-1];
        if(n<min){cout<<n<<endl;}
        else{cout<<min-1<<endl;}
    }

}