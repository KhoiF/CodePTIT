#include<bits/stdc++.h>

using namespace std;
bool cmp(pair<int,int> p1, pair<int,int> p2){
    return p1.first < p2.first;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>> v;
    int a,b;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end(),cmp);
    long long ans=0;
    for(auto x: v){
        if(x.second>m){
            ans+=1ll*m*x.first;
            break;
        }
        else{
            ans+=1ll*x.first*x.second;
            m-=x.second;
        }
    }
    cout << ans;
}
