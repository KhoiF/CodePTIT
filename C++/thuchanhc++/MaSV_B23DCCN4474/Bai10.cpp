#include<bits/stdc++.h>

using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second==b.second){
        return a.first < b.first;
    }
    else return a.second > b.second;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    int a, b;
    for(int i=0; i<n; i++){
        cin >> v[i].first;
        cin >> a >> b;
        v[i].second=a*7 + b*3;
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[0].first << " ";
    int cnt=1;
    for(int i=1; i<n; i++){
        if(cnt==7)  break;
        if(v[i].second==v[i-1].second)  continue;
        else{
            cout << v[i].first << " ";
            cnt++;
        }
    }
}