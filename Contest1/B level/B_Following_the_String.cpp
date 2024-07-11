#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test > 0)
    {
        int n,i=0,em;
        cin>>n;
        int a[n];
        test--;
        while(n>0){
            int x;
            cin>>x;
            a[i]=x;
            n--;
            i++;
        }
        n=i;
        i=1;
        char str[n];
        char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        int k=0;
        for(int j=0;j<n;j++){
            if(a[j]==0){str[j]=alpha[k];k++;}
        }
        k-=1;
        int kcopy=k;
        while(k>=0){
            for(int r=0;r<n;r++){
                if(a[r]==i){str[r]=alpha[kcopy-k];i++;a[r]=-1;}
            }
            i=1;
            k--;
        }
        for(int s=0;s<n;s++){
            cout<<str[s];
        }
        cout<<endl;
    }
}