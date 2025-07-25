#include<bits/stdc++.h>

using namespace std;
int t, n;
bool check(string s){
    if(s[0]=='1')   return false;
    for(int i=1; i<n; i++){
        if(s[i]=='1' && s[i-1]=='1')    return false;
    }
    return true;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        n-=2;
        string s(n, 'A');
        s="H"+s+"A";
        cout << s << "\n";
        for(int i=1; i<(1<<n); i++){
            s=bitset<16>(i).to_string();
            s.erase(0, 16-n);
            if(check(s)){
                cout << "H";
                for(int i=0; i<n; i++){
                    if(s[i]=='1')  cout << 'H';
                    else cout << 'A';
                }
                cout << "A\n";
            }
        }
    }
}