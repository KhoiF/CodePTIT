#include<bits/stdc++.h>

using namespace std;
int n, k, a[16];
vector<string> v;
void Try(int i){
    if(i>k){
        for(int j=1; j<=k; j++) cout << v[a[j]] << " ";
        cout << "\n";
        return;
    }
    for(int j=a[i-1]+1; j<=n-k+i; j++){
        a[i]=j;
        Try(i+1);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    v.push_back("");
    set<string> se;
    string s;
    for(int i=0; i<n; i++){
        cin >> s;
        se.insert(s);
    }
    for(string u : se)  v.push_back(u);
    n=v.size()-1;
    sort(v.begin()+1, v.end());
    Try(1);
}