#include<bits/stdc++.h>

using namespace std;
int used[200005];
int BFS(int s, int t){
    memset(used, 0, sizeof used);
    queue<pair<int, int>> q;
    q.push({s, 0});
    used[s]=1;
    while(1){
        int x = q.front().first, cnt=q.front().second;
        if(x==t)    return cnt;
        q.pop();
        if(x<t && !used[2*x]){
            q.push({2*x, cnt+1});
            used[2*x]=1;
        }
        if(x>=1 && !used[x-1]){
            q.push({x-1, cnt+1});
            used[x-1]=1;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int T, s, t;
    cin >> T;
    while(T--){
        cin >> s >> t;
        cout << BFS(s, t) << "\n";
    }
}