#include<iostream>
using namespace std;
int main(){
    int test;
    cin>> test;
    while(test--){
        int a,b;
        cin>>a>>b;
        if((a+b)%2==0){cout<<"Bob"<<endl;}
        else{cout<<"Alice"<<endl;}
    }

}