#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    long long n, k;
    cin >> T;
    while (T--) {
        cin >> n >> k;
        long long tmp=(k-1)*k/2;
        long long res=n/k*tmp;
        tmp=n%k;
        res+=(tmp+1)*tmp/2;
        cout << res << "\n";
    }
    return 0;
}

