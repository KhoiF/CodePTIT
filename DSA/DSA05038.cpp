#include<bits/stdc++.h>

using namespace std;
#define maxn 100005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
ii a[maxn];
int n;
int Find(vector<ii> v, ii x){
    int m=v.size();
    int l=-1, r=m-1;
    while(r-l>1){
        int mid=(l+r)/2;
        if(v[mid].first>=x.first && v[mid].second>=x.second)    r=mid;
        else l=mid;
    }
    if(v[r].first>=x.first && v[r].second>=x.second)    return r;
    else if(v[r].first < x.first && v[r].second < x.second) return r+1;
    else return -1;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    // cin >> test;
    while(test--){
        cin >> n;
        vector<ii> v;
        for(int i=1; i<=n; i++) cin >> a[i].first >> a[i].second;
        v.pb(a[1]);
        for(int i=2; i<=n; i++){
            int id=Find(v, a[i]);
            if(id==-1)  continue;
            else if(id==v.size())    v.pb(a[i]);
            else v[id]=a[i];
        }
        cout << v.size() << "\n";
    }
}