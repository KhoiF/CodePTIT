#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, used[10][10];
    int dx[]={-2, -2, -1, 1, 2, 2, 1, -1};
    int dy[]={-1, 1, 2, 2, 1, -1, -2, -2};
    string st, en;
    cin >> t;
    while(t--){
        memset(used, 0, sizeof used);
        cin >> st >> en;
        int y=st[0]-'a'+1, x=st[1]-'0';
        int v=en[0]-'a'+1, u=en[1]-'0';
        queue<pair<pair<int, int>, int>> q;
        q.push({{x, y}, 0});
        used[x][y]=1;
        while(1){
            int i=q.front().first.first, j=q.front().first.second;
            int cnt=q.front().second;
            if(i==u && j==v){
                cout << cnt << "\n";
                break;
            }
            q.pop();
            for(int k=0; k<8; k++){
                int inew=i+dx[k], jnew=j+dy[k];
                if(inew>=1 && inew<=8 && jnew>=1 && jnew<=8 && !used[inew][jnew]){
                    q.push({{inew, jnew}, cnt+1});
                    used[inew][jnew]=1;
                }
            }
        }
    }
}