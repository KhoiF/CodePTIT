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
int s, t, prime[10000], used[10000];
void sang(){
    for(int i=2; i<=10000; i++) prime[i]=1;
    for(int i=2; i<=100; i++){
        if(prime[i]){
            for(int j=i*i; j<=10000; j+=i)  prime[j]=0;
        }
    }
}
void solve(){
    memset(used, 0, sizeof used);
    queue<ii> q;
    q.push({s, 0});
    used[s]=1;
    while(q.size()){
        int u = q.front().first;
        int cnt=q.front().second;
        if(u==t){
            cout << cnt << "\n";
            return;
        }
        q.pop();
        string x=to_string(u);
        for(int i=0; i<4; i++){
            char c='0';
            if(i==0)    c='1';
            string tmp=x;
            for(c; c<='9'; c++){
                tmp[i]=c;
                int k=stoi(tmp);
                if(!used[k] && prime[k]){
                    q.push({k, cnt+1});
                    used[k]=1;
                }
            }
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    sang();
    int test = 1;
    cin >> test;
    while(test--){
        cin >> s >> t;
        solve();
    }
}