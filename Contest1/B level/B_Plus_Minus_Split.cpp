#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int test;
    cin>> test;
    while(test--){
        int n,j,count=0;
        cin>>n;
        int a[n];
        string s,empty;
        getline(cin,empty);
        getline(cin,s);
        // string :: iterator itr=s.begin();
        // for(itr=s.begin();itr!=s.end();itr++,j++){
        //     if(*itr == "+"){a[j]=1;}
        //     else{a[j]=-1;}
        // }
        // cout << *itr;
        for(int i=0;i<n;i++){
            if(s[i]=='+'){a[i]=1;}
            else if(s[i]=='-'){a[i]=-1; count++;}
        }
        // while(true){if(a[n-2]+a[n-1]==0){n=n-2;} else break;}
        // for(int i=0;i<n-3;i++){
        //     if((a[i]+a[i+1]) == 0){
        //         for(j=i;j<n-3;j+=2){
        //             a[j]=a[j+2];
        //             a[j+1]=a[j+3];
        //         }
        //         if(j==n-3){a[n-3]=a[n-1];}
        //         i-=2;
        //         count+=2;
        //     }
        // }
        // cout<<n-count<<endl;
        cout<< abs(n- 2 * count)<<endl; 
    }

}