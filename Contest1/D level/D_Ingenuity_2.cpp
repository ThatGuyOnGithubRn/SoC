#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll n;
        cin>>n;
        vector<pair<int,int>> a;
        a.reserve(n);
        if(n<=1){cout<<"NO"<<endl;}
        else{
        string s;
        cin>>s;
        for(auto i=s.begin();i!=s.end();i++){
            if(*i=='N'){a.push_back({1,0});}
            if(*i=='S'){a.push_back({-1,0});}
            if(*i=='E'){a.push_back({0,1});}
            if(*i=='W'){a.push_back({0,-1});}
        }
        if(n==2){
            if(a[0]==a[1]){cout<<"RH"<<endl;}
            else{cout<<"NO"<<endl;;}
        }
        else{
        pair<int,int> sum= {0,0};
        for(int i=0;i<n;i++){
            sum.first+=a[i].first;
            sum.second+=a[i].second;
            // cout<<sum.first<<sum.second;
        }
        if(sum.first%2+sum.second%2==0){
            bool r=true,r2=true;
            int val1=sum.first/2;
            int val2=sum.second/2;
            
            if(sum.first<=0 && sum.second<=0){
                if(val1!=0 && val2!=0){
                    for(int i=0;i<n;i++){
                        if(a[i].first==-1 && a[i].second==0){
                            if(val1<0){
                                cout<<"R";
                                val1++;
                            }
                            else{
                                cout<<"H";
                            }
                        }
                        if(a[i].first==1 && a[i].second==0){
                            cout<<"H";
                        }
                        


                        if(a[i].first==0 && a[i].second==-1){
                            if(val2<0){
                                cout<<"R";
                                val2++;
                            }
                            else{
                                cout<<"H";
                            }
                        }
                        if(a[i].first==0 && a[i].second==1){
                            cout<<"H";
                        }
                    }
                }
                if(val1==0 && val2 !=0){
                for(int i=0;i<n;i++){
                if (a[i].first==1 && r==true){cout<<"R";r=false;}
                else if (a[i].first==1 && r==false){cout<<"H";r=true;}
                if(a[i].first==0 && a[i].second==-1){
                    if(val2<0){
                        cout<<"R";
                        val2++;
                    }
                    else{
                        cout<<"H";
                    }
                }
                if(a[i].first==0 && a[i].second==1){
                    cout<<"H";
                }
                }
                }
                if(val1!=0 && val2 ==0){
                for(int i=0;i<n;i++){
                    if (a[i].second==1 && r==true){cout<<"R";r=false;}
                    else if (a[i].second==1 && r==false){cout<<"H";r=true;}
                    if(a[i].first==-1 && a[i].second==0){
                        if(val1<0){
                            cout<<"R";
                            val1++;
                        }
                        else{
                            cout<<"H";
                        }
                    }
                    if(a[i].first==1 && a[i].second==0){
                        cout<<"H";
                    }
                }
                }
                if(val1==0 && val2==0){
                    for(int i=0;i<n;i++){
                        if (a[i].first==1 && r==true){cout<<"R";r=false;}
                        else if (a[i].first==1 && r==false){cout<<"H";r=true;}
                    }
                    for(int i=0;i<n;i++){
                        if (a[i].second==1 && r2==true){cout<<"R";r2=false;}
                        else if (a[i].second==1 && r2==false){cout<<"H";r2=true;}
                    }
                }
                
            }


            if(sum.first>0 && sum.second<=0){
                if(val2!=0){
                    for(int i=0;i<n;i++){
                        if(a[i].first==1 && a[i].second==0){
                            if(val1>0){
                                cout<<"R";
                                val1--;
                            }
                            else{
                                cout<<"H";
                            }
                        }
                        if(a[i].first==-1 && a[i].second==0){
                            cout<<"H";
                        }
                        

                        
                        if(a[i].first==0 && a[i].second==-1){
                            if(val2<0){
                                cout<<"R";
                                val2++;
                            }
                            else{
                                cout<<"H";
                            }
                        }
                        if(a[i].first==0 && a[i].second==1){
                            cout<<"H";
                        }
                    }
                }
                if(val1!=0 && val2 ==0){
                for(int i=0;i<n;i++){
                    if (a[i].second==1 && r==true){cout<<"R";r=false;}
                    else if (a[i].second==1 && r==false){cout<<"H";r=true;}
                    if(a[i].first==1 && a[i].second==0){
                        if(val1>0){
                            cout<<"R";
                            val1--;
                        }
                        else{
                            cout<<"H";
                        }
                    }
                    if(a[i].first==-1 && a[i].second==0){
                        cout<<"H";
                    }
                }
                }
            }
            if(sum.first>0 && sum.second>0){
                for(int i=0;i<n;i++){
                    if(a[i].first==1 && a[i].second==0){
                        if(val1>0){
                            cout<<"R";
                            val1--;
                        }
                        else{
                            cout<<"H";
                        }
                    }
                    if(a[i].first==-1 && a[i].second==0){
                        cout<<"H";
                    }
                    

                    
                    if(a[i].first==0 && a[i].second==1){
                        if(val2>0){
                            cout<<"R";
                            val2--;
                        }
                        else{
                            cout<<"H";
                        }
                    }
                    if(a[i].first==0 && a[i].second==-1){
                        cout<<"H";
                    }
                }
            }
            if(sum.first<=0 && sum.second>0){
                if(val1!=0){
                for(int i=0;i<n;i++){
                    if(a[i].first==-1 && a[i].second==0){
                        if(val1<0){
                            cout<<"R";
                            val1++;
                        }
                        else{
                            cout<<"H";
                        }
                    }
                    if(a[i].first==1 && a[i].second==0){
                        cout<<"H";
                    }
                    

                    
                    if(a[i].first==0 && a[i].second==1){
                        if(val2>0){
                            cout<<"R";
                            val2--;
                        }
                        else{
                            cout<<"H";
                        }
                    }
                    if(a[i].first==0 && a[i].second==-1){
                        cout<<"H";
                    }
                }
                }
                if(val1==0 && val2 !=0){
                    for(int i=0;i<n;i++){
                        if (a[i].first==1 && r==true){cout<<"R";r=false;}
                        else if (a[i].first==1 && r==false){cout<<"H";r=true;}
                        if(a[i].first==0 && a[i].second==1){
                            if(val2>0){
                                cout<<"R";
                                val2--;
                            }
                            else{
                                cout<<"H";
                            }
                        }
                        if(a[i].first==0 && a[i].second==-1){
                            cout<<"H";
                        }
                    }
                }
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
    }
}
}