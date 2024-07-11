#include <bits/stdc++.h> 
using namespace std;

void solve(int n){
    int arr[n];
    for(int i=0;i<n;i++)
    {
        if(i%2==0)arr[i]=n-i/2;
        else{arr[i]=i/2 +1;}
    }
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
}
// void solve(int n){
//     int arr[n];
//     for (int i = 0; i < n-2; i++){ 
//         arr[i]=i+2;
//     }
    
//     arr[n-2]=1;
//     arr[n-1]=n;
//     for(int j=0;j++;j<n-2){
//         for(int i=0;i++;i<j){
//             if((j-i)%i ==0 && (j-1)%(i+1) ==0){
//                 swap(arr[i+1],arr[j+1]);
//             }
//         }
//     }
//     for (int i = 0; i < n; i++) 
//         cout << arr[i] << " "; 
//     cout << endl; 
// }
int main()
{
    int test;
    cin >> test;
    while (test > 0)
    {
        int n; cin>>n;
        solve(n);
        test--;
    }
}