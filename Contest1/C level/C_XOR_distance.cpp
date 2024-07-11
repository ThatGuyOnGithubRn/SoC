#include<iostream>
using namespace std;
int main(){
    int test;
    cin>> test;
    while(test--){
        int abit[30],bbit[30];
        int a,b,r,i=0;
        cin>>a>>b>>r;
        int switcher=a^b;
        void convertToBinary(unsigned int n)
        {
            if (n / 2 != 0) {
                convertToBinary(n / 2);
            }
            cout<<n % 2;
        }
    }
}