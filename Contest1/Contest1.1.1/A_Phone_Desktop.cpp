#include<iostream>
using namespace std;
int main(){
    int test;
    cin>> test;
    while(test--){
        int x,y;
        cin>>x>>y;
        int n=0;
        n+=(y/2+y%2);
        if (x>(n*7+4*(y%2))){
            x-=(n*7+4*(y%2));
            if (x%15==0){
                 x=x/15;
                n+=x;
            }
            else{
                x=x/15;
                n+=x+1;
            }
        }
        cout<<n<<endl;
    }
}