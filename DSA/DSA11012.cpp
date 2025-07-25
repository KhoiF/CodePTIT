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
        int n, m;
        map<ii, char> mp;
        cin >> n;
        for(int i=0; i<n; i++){
            int x, y;
            char c;
            cin >> x >> y >> c;
            mp[{x, y}]=c;
        }
        cin >> m;
        if(m!=n){
            cout << "0\n";
            continue;
        }
        bool flag=1;
        for(int i=0; i<m; i++){
            int x, y;
            char c;
            cin >> x >> y >> c;
            if(!mp.count({x, y}) || mp[{x, y}]!=c){
                flag=0;
            }
        }
        if(flag)    cout << "1\n";
        else cout << "0\n";
    }
}