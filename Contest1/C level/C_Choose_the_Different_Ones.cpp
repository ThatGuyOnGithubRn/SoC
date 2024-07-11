#include <iostream>
#include <vector>
using namespace std;
int main()
{
    
    int test;
    cin >> test;
    while (test > 0)
    {
        bool enter=true;
        int n,m,k,i=0;
        cin>>n>>m>>k;
        int a[n],b[m];
        int nc=n,mc=m;
        while(nc>0){
            int x;
            cin>>x;
            a[i]=x;
            nc--;
            i++;
        }
        i=0;
        while(mc>0){
            int x; 
            cin>>x;
            b[i]=x;
            mc--;
            i++;
        }
        i=0;
        int suma=0,sumb=0;
            int aval[k]={0},bval[k]={0};
            for(int ii=1;ii<=k;ii++){
                for(int loop=0;loop<n;loop++){
                    if(a[loop]==ii ){if(aval[ii-1]=1){suma++;}aval[ii-1]=1;}
                }
                for(int loop=0;loop<m;loop++){
                    if(b[loop]==ii ){if(bval[ii-1]==0){sumb++;}bval[ii-1]=1;}
                }
            }
            if(suma<k/2 || sumb<k/2){cout<<"NO"<<endl;enter=false;}
            int sumval[k]={0};
            if(enter==true){
            for(int qwe=0;qwe<k;qwe++){
                sumval[qwe]=aval[qwe]+bval[qwe];
                if(sumval[qwe]==0){cout<<"NO"<<endl;enter=false;break;}
            }
            }
            if(enter==true){
            for(int iii=0;iii<k;iii++){
                if(aval[iii]==0 && bval[iii]==0){cout<<"NO"<<endl;enter = false;break;}
                else{
                    cout<<"YES"<<endl;break;
                }
            }
            }
        test--;
    }
}