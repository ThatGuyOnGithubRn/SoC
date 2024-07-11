#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test > 0)
    {
        char x;
        int n,i=0;
        cin>>n;
        char a[n];
        while(n>0){
            char x;
            cin>>x;
            a[i]=x;
            n--;
            i++;
        }
        int start,end;
        for(int j=0;j<i;j++){
            if(a[j]=='B'){
                start=j;
                break;                
            }
        }
        for(int j=i-1;j>=0;j--){
            if(a[j]=='B'){
                end=j;
                break;                
            }
        }
        cout<<end+1-start<<endl;
        test--;
    }
}