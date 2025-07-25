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
        ll p, q;
        cin >> p >> q;
        while(p>0){
            if(p>=q){
                cout << "1/1";
                p-=q;
            }
            else{
                ll x=q/p;
                if(q%p) x++;
                cout << 1 << "/" << x;
                p=p*x-q;
                q=q*x;
                ll tmp=__gcd(p, q);
                p/=tmp;
                q/=tmp;
                if(p>0) cout << " + ";
            }
        }   
        cout << "\n";
    }
}