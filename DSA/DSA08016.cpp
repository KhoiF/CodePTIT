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
string s;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        s="";
        for(int i=1; i<=10; i++){
            char c;
            cin >> c;
            s+=c;
        }
        int ans=10;
        queue<pair<string, int>> q, p;
        q.push({s, 0});
        while(q.size()){
            string u=q.front().first;
            int cnt=q.front().second;
            q.pop();
            if(cnt>=6)  break;
            if(u[4]=='0' && u[5]=='0'){
                ans=min(ans, cnt);
                break;
            }
            string s1=u;
            char tmp=s1[0];
            s1[0]=s1[3]; s1[3]=s1[7]; s1[7]=s1[8]; s1[8]=s1[5]; s1[5]=s1[1]; s1[1]=tmp;
            q.push({s1, cnt+1});
        }
        p.push({s, 0});
        while(p.size()){
            string u=p.front().first;
            int cnt=p.front().second;
            p.pop();
            if(cnt>=6)  break;
            if(u[4]=='0' && u[5]=='0'){
                ans=min(ans, cnt);
                break;
            }
            string s2=u;
            char tmp=s2[1];
            s2[1]=s2[4]; s2[4]=s2[8]; s2[8]=s2[9]; s2[9]=s2[6]; s2[6]=s2[2]; s2[2]=tmp;
            p.push({s2, cnt+1});
        }
        cout << ans << "\n";
    }
}