#include<bits/stdc++.h>

using namespace std;
int t, n, a[20];
vector<int> v;
vector<vector<int>> res;
void Try(int i, int sum){
    if(sum%2==1)   res.push_back(v);
    if(i>n) return;
    for(int j=i; j<=n; j++){
        v.push_back(a[j]);
        Try(j+1, sum+a[j]);
        v.pop_back();
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        sort(a+1, a+n+1, greater<int>());
        Try(1, 0);
        sort(res.begin(), res.end());
        for(int i=0; i<res.size(); i++){
            for(int x : res[i]) cout << x << " ";
            cout << "\n";
        }
        v.clear();
        res.clear();
    }
}