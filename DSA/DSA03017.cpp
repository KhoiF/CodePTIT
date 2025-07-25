#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        int k;
        string s;
        cin >> k >> s;
        map<char, int> mp;
        for(char c : s) mp[c]++;
        priority_queue<int> q;
        for(auto x : mp){
            q.push(x.second);
        }
        while(k--){
            int tmp=q.top();
            q.pop();
            tmp--;
            q.push(tmp);
        }
        ll ans=0;
        while(q.size()){
            ans+=1ll*q.top()*q.top();
            q.pop();
        }
        cout << ans << "\n";
        
    }
}