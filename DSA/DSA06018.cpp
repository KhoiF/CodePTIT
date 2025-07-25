#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, tmp;
    cin >> t;
    while(t--){
        cin >> n;
        set<int> se;
        int minn=1e3, maxx=0;
        for(int i=0; i<n; i++){
            cin >> tmp;
            se.insert(tmp);
            minn=min(minn, tmp);
            maxx=max(maxx, tmp);
        }
        cout << maxx-minn+1-se.size() << "\n";
    }
}