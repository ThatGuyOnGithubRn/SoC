#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    int test;
    cin>> test;
    while(test--){
        int n;
        cin>>n;
        string s,sstore,ssort;
        cin>>s;
        ssort=s;
        sort(ssort.begin(), ssort.end());
        for(auto i=ssort.begin();i!=ssort.end();i++){
            if (*i==*(i+1)){
                ssort.erase(i);
                i--;
            }
        }
        for(auto i=s.begin();i!=s.end();i++){
            for(auto j=ssort.begin();j!=ssort.end();j++){
                if (*i==*j){
                    // cout<<*i;

                    *i=*(ssort.end()-j-1+ssort.begin());
                    // cout<<*i;
                    // cout<<s;
                    break;
                }
            }
        }
        cout<<s<<endl;
    }
}