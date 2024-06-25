// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// int32_t main(){
//     ll test;
//     cin>>test;
//     while(test--){
//         string s;
//         cin>>s;
//         ll val=0,ques=0;
//         bool cont=false;
//         if(s.length()%2==1){cout<<"NO"<<endl;continue;}
//         for(auto i :s){
//             if(i=='('){val++;}
//             if(i==')'){val--;}
//             if(i=='?'){ques++;}
//             if(val+ques<0){cout<<"NO"<<endl;cont=true;break;}
//         }
//         if(val-ques>0){cout<<"NO"<<endl;continue;}
//         if(cont==true){continue;}
//         if(cont==false){cout<<"YES"<<endl;continue;}
//     }
// }
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main() {
    ll test;
    cin >> test;
    while (test--) {
        string s;
        cin >> s;
        ll val = 0, ques = 0;
        bool cont = false;

        if (s.length() % 2 == 1) {
            cout << "NO" << endl;
            continue;
        }

        // Forward scan
        for (auto i : s) {
            if (i == '(') {
                val++;
            } else if (i == ')') {
                val--;
            } else if (i == '?') {
                ques++;
            }
            if (val + ques < 0) {
                cout << "NO" << endl;
                cont = true;
                break;
            }
        }

        if (cont) {
            continue;
        }
        val=0;
        ques=0;
        for (auto i = s.rbegin(); i != s.rend(); ++i) {
            if (*i == ')') {
                val++;
            } else if (*i == '(') {
                val--;
            } else if (*i == '?') {
                ques++;
            }
            if (val + ques < 0) {
                cout << "NO" << endl;
                cont = true;
                break;
            }
        }

        if (cont) {
            continue;
        }

        cout << "YES" << endl;
    }
    return 0;
}
