#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s;
    cin >> t;
    cin.ignore();
    while(t--){
        getline(cin,s);
        if(s[0]=='+' && s[1]=='8' && s[2]=='4'){
            cout << 0;
            for(int i=3; i<s.size(); i++){
                if(s[i]>='0' && s[i]<='9')  cout << s[i];
            }
        }
        else if(s[0]=='8' && s[1]=='4'){
            cout << 0;
            for(int i=2; i<s.size(); i++){
                if(s[i]>='0' && s[i]<='9')  cout << s[i];
            }
        }
        else{
            for(int i=0; i<s.size(); i++){
                if(s[i]>='0' && s[i]<='9')  cout << s[i];
            }
        }
        cout << "\n";
    }
}