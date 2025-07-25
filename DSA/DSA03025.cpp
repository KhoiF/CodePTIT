#include<bits/stdc++.h>

using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second!=b.second)  return a.second < b.second;
    else return a.first < b.first;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<pair<int, int>> v(n);
        for(pair<int, int> &x : v){
            cin >> x.first >> x.second;
        }
        sort(v.begin(), v.end(), cmp);
        int cnt=1, en=v[0].second;
        for(int i=1; i<n; i++){
            if(v[i].first >= en){
                cnt++;
                en=v[i].second;
            }
        }
        cout << cnt << "\n";
    }
}