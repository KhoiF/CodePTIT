#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        int n=s.size();
        int d[26]={0};
        for(int i=0; i<n; i++){
            d[s[i]-'a']++;
        }
        int maxx=0;
        for(int i=0; i<=25; i++)    maxx=max(maxx, d[i]);
        if((n-maxx)>=(maxx-1))  cout << 1;
        else cout << 0;
        cout << endl;
    }
}