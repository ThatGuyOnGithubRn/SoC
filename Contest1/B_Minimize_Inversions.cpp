#include<iostream>
using namespace std;
int main(){
    int test;
    cin>> test;
    while(test--){
        int n,i=0;
        cin>>n;
        int a[n],b[n],c[n],d[n];
        while(i<n){
            cin>>a[i];
            i++;
        }
        for(int l=0;l<n;l++)
        {
            int r=a[l];
            c[r-1]=l+1;
        }
        i=0;
        while(i<n){
            cin>>b[i];
            d[i]=b[i];
            i++;
        }
        for(i=0;i<n;i++){
            b[i]=d[c[i]-1];
            a[i]=i+1;
        }
        // for(int j=0;j<n;j++){
        //     for(int k=j;k<n;k++){
        //         if(a[j]>a[k] && b[j]>b[k]){
        //             int t=a[k];
        //             a[k]=a[j];
        //             a[j]=t;
        //             t=b[k];
        //             b[k]=b[j];
        //             b[j]=t;
        //         }          
        //     }
        // }
        i=0;
        while(i<n){
            cout<<a[i]<<" ";
            i++;
        }
        cout<< endl;
        i=0;
        while(i<n){
            cout<<b[i]<<" ";
            i++;
        }
        cout<<endl;
    }

}