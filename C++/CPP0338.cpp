#include<bits/stdc++.h>

using namespace std;
int most_k(string s, int k){
    if(s.size()==0) return 0;
    int res=0, l=0;
    map<char, int> mp;
    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
        while(mp.size()>k){
            mp[s[l]]--;
            if(mp[s[l]]==0){
                mp.erase(s[l]);
            }
            l++;
        }
        res+=i-l+1;
    }
    return res;
}
void solve(string s, int k){
    cout << most_k(s, k) - most_k(s, k-1) << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, k;
    string s;
    cin >> t;
    while(t--){
        cin >> s >> k;
        solve(s, k);
    }
}