#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int ans = 2e6;
        vector<int> a(n);
        for (int &i : a) cin >> i;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int sum = a[i] + a[j];
                if (abs(sum) < abs(ans)) ans = sum;
            }
        }
        cout << ans << "\n";
    }
}