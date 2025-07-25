#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    vector<int> v;
    for(int x : a){
        auto it=lower_bound(v.begin(), v.end(), x);
        if(it==v.end()) v.push_back(x);
        else *it=x;
    }
    cout << v.size();
}