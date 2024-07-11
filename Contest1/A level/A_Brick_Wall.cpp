#include<iostream>
using namespace std;
int main(){
    int test;
    cin>> test;
    while(test--){
        int m,n;
        cin>>n>>m;
        if(m%2==0){
            cout<<m*n/2<<endl;
        }
        else{
            cout<<(m-1)*n/2<<endl;
        }
    }
}