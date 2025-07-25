#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        vector<int> v;
        int cnt=0, tmp=0, check=1;
        for(int i=0; i<s.size(); i++){
            if(s[i]>='0' && s[i]<='9'){
                tmp=tmp*10+(s[i]-'0');
                if(i==s.size()-1)   v.push_back(tmp);
            }
            else if(s[i]=='.'){
                v.push_back(tmp);
                tmp=0;
                cnt++;
            }
            else{
                check=0;
                break;
            }
        }
        if(!check){
            cout << "NO\n";
            continue;
        }
        if(cnt!=3)   cout << "NO\n";
        else{
            if(v.size()!=4)  cout << "NO\n";
            else{
                for(int i=0; i<v.size(); i++){
                    if(v[i]>255){
                        check=0;
                        break;
                    }
                }
                if(check)   cout << "YES\n";
                else cout << "NO\n";
            }
        }
    }
}