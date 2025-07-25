#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n;
        set<int> se;
        for(int i=0; i<n; i++){
            cin >> x;
            se.insert(x);
        }
        if(se.size()==1)    cout << -1;
        else{
            auto it=se.begin();
            cout << *(it++) << " ";
            cout << *it;
        }
        cout << "\n";
    }
}