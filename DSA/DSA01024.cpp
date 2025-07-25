#include<bits/stdc++.h>

using namespace std;
int n, k, a[15];
vector<string> v;
void Try(int m){
    if(m>k){
        for(int i=1; i<=k; i++) cout << v[a[i]] << " ";
        cout << "\n";
        return;
    }
    for(int i=a[m-1]+1; i<=n-k+m; i++){
        a[m]=i;
        Try(m+1);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    set<string> se;
    string s;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> s;
        se.insert(s);
    }
    v.push_back(" ");
    for(string i : se)  v.push_back(i);
    n=v.size()-1;
    Try(1);
}