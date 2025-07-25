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
    //cin >> test;
    while(test--){
        string s;
        cin >> s;
        int q;
        cin >> q;
        while(q--){
            char c;
            cin >> c;
            if(c=='c'){
                int x;
                char y;
                cin >> x >> y;
                s[x-1]=y;
            }
            else{
                int l, r;
                cin >> l >> r;
                string tmp=s;
                reverse(tmp.begin()+l-1, tmp.begin()+r);
                if(tmp==s)  cout << "YES\n";
                else cout << "NO\n";
            }
        }        
    }
}