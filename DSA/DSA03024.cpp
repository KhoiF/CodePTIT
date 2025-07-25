#include<bits/stdc++.h>

using namespace std;
int t, n;
bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second==b.second)  return a.first<b.first;
    else return a.second<b.second;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        vector<pair<int, int>> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i].first >> v[i].second;
        }
        sort(v.begin(), v.end(), cmp);
        int res=1, en=v[0].second;
        for(int i=1; i<n; i++){
            if(v[i].first>=en){
                res++;
                en=v[i].second;
            }
        }
        cout << res << "\n";
    }    
}