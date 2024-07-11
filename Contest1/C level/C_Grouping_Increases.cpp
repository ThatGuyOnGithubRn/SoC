#include<iostream>
using namespace std;
int main(){
    int test;
    cin>> test;
    while(test--){
        int n;
        cin>>n;
        int a[n];
        int j,max=0,max_in,k,count=0;
        for(int i=0;i<n;i++){
            cin>>j;
            a[i]=j;
            if(j>max){max=j;max_in=i;}
        }





        k= max_in;    
        int s[n];
        s[0]=max;
        while(max_in<n-1){
            a[max_in]=a[max_in+1];
            max_in++;
        }
        max_in= k;
        n--;
        while(max_in!=n){
            max=0;
            for(int i=max_in;i<n;i++){
                if(a[i]>max){max=a[i];max_in=i;}   
            }
            k=max_in;
            while(max_in<n-1){
                a[max_in]=a[max_in+1];
                max_in++;
            }
            max_in=k;
            n--;
        }
        for(int i=0;i<n-1;i++){
            if(a[i]=a[i+1]){count--;}
        }
        for(int i=0;i<n-1;i++){
            if(a[i]<a[i+1]){count++;}
        }
        cout<<count<<endl;
    }
}

