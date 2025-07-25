#include<bits/stdc++.h>

using namespace std;
int t, n;
string s;
void sinh(){
    for(int i=0; i<(1<<n); i++){
        int tmp=i^(i>>1);
        string b = bitset<10>(tmp).to_string();
        b.erase(0, 10-n);
        if(b==s){
            string ans=bitset<10>(i).to_string();
            ans.erase(0, 10-n);
            cout << ans << "\n";
            return;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> s;
        n=s.size();
        sinh();
    }
}