#include<bits/stdc++.h>

using namespace std;
int t, n, used[100005];
void solve(){
    queue<pair<int, int>> q;
    q.push({n, 0});
    used[n]=1;
    while(1){
        int tmp=q.front().first, cnt=q.front().second;
        if(tmp==1){
            cout << cnt << "\n";
            return;
        }
        q.pop();
        if(tmp%3==0 && !used[tmp/3]){
            q.push({tmp/3, cnt+1});
            used[tmp/3]=1;
        }
        if(tmp%2==0 && !used[tmp/2]){
            q.push({tmp/2, cnt+1});
            used[tmp/2]=1;
        }
        if(tmp-1>=1 && !used[tmp-1]){
            q.push({tmp-1, cnt+1});
            used[tmp-1]=1;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        memset(used, 0, sizeof used);
        solve();
    }
}