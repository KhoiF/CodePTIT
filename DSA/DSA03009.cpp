#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
const int MOD = 1e9+7;
bool cmp(ii a, ii b){
    if(a.second != b.second)    return a.second > b.second;
    else    return a.first < b.first;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        int n, x;
        cin >> n;
        vector<ii> v(n);
        for(int i=0; i<n; i++){
            cin >> x >> v[i].first >> v[i].second;
        }
        sort(v.begin(), v.end(), cmp);
        vector<bool> dd(maxn, 0);
        pair<int, int> ans = {0, 0};
        for (int i = 0; i < n; ++i) {
            for (int j = v[i].first; j >= 1; --j) {
                if (!dd[j]) {
                    dd[j] = 1;
                    ans.first++;
                    ans.second += v[i].second;
                    break;
                }
            }
        }
        cout << ans.first << " " << ans.second << "\n";
    }
}