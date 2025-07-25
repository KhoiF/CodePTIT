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
int n;
vector<int> v;
map<int, int> mp;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    priority_queue<int, vector<int>, greater<int>> q;
    q.push(1);
    while(v.size()<1e4){
        int tmp=q.top();
        v.pb(tmp);
        q.pop();
        if(mp[tmp*2]==0){
            q.push(tmp*2);
            mp[tmp*2]=1;
        }
        if(mp[tmp*3]==0){
            q.push(tmp*3);
            mp[tmp*3]=1;
        }
        if(mp[tmp*5]==0){
            q.push(tmp*5);
            mp[tmp*5]=1;
        }
    }
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n;
        cout << v[n-1] << "\n";
    }
}