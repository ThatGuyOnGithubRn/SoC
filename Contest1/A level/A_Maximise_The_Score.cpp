#include <bits/stdc++.h> 
using namespace std;
void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]) 
                swap(arr[j], arr[j + 1]);
        }
    } 
} 
int main()
{
    
    int test;
    cin >> test;
    while (test > 0)
    {
        int n;
        cin>>n;
        int m=2*n,i=0;
        int a[2*n];
        while(m>0){
            cin>> a[i];
            i++;
            m--;
        }
        m=i;
        bubbleSort(a, m);
        int sum=0;
        for(int i=0;i<m/2;i++){
            sum+=a[2*i];
        }
        cout<<sum<<endl;
        test--;
    }
}