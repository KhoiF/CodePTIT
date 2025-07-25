#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,tmp;
    cin >> n;
    set<int> se;
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        se.insert(tmp);
    }
    for(auto x : se) cout << x << ' ';
}