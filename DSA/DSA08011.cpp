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
int n, m;
string s, t;
set<string> se;
void BFS(){
    queue<pair<string, int>> q;
    q.push({s, 1});
    se.erase(s);
    while(q.size()){
        string u=q.front().first;
        int cnt=q.front().second;
        if(u==t){
            cout << cnt << "\n";
            return;
        }
        q.pop();
        for(int i=0; i<m; i++){
            string tmp=u;
            for(char c='A'; c<='Z'; c++){
                tmp[i]=c;
                if(se.find(tmp)!=se.end()){
                    q.push({tmp, cnt+1});
                    se.erase(tmp);
                }
            }
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n >> s >> t;
        m=s.size();
        se.clear();
        for(int i=1; i<=n; i++){
            string x;
            cin >> x;
            se.insert(x);
        }
        BFS();
    }
} 