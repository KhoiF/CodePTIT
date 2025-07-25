#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
const int MOD = 1e9+7;
struct Data{
    int vl;
    int fi;
    int se;
};
bool cmp1(Data a, Data b){
    if(a.vl!=b.vl)  return a.vl<b.vl;
    else return a.fi<b.fi;
}
bool cmp2(Data a, Data b){
    return a.fi < b.fi;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        vector<Data> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i].vl;
            v[i].fi=i;
        }
        sort(v.begin(), v.end(), cmp1);
        for(int i=0; i<n; i++)  v[i].se=i;
        sort(v.begin(), v.end(), cmp2);
        vector<int> res;
        int maxx=-1;
        for(int i=0; i<n-1; i++){
            maxx=max(maxx, v[i].se);
            if(maxx==i) res.pb(i+1);
        }
        cout << res.size() << "\n";
        for(int i : res)    cout << i << " ";
        cout << "\n";
    }
}