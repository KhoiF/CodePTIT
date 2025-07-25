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
        int i=s.size()-1;
        while(s[i]>=s[i-1] && i>0){
            i--;
        }
        i--;
        if(i>0){
            int id=s.size()-1;
            while(s[id]>=s[i])   id--;
            while(s[id]==s[id-1])   id--;
            swap(s[i],s[id]);
            cout << s << "\n";
        }
        else cout << "-1\n";
        
    }
}