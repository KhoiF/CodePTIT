#include<bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a(n);
		int cnt = 0;
		for (int i = 0; i < n; i++) cin >> a[i];
		while (1) {
			for (int i = 0; i < n; i++) {
				if (a[i] % 2 == 1) cnt++, a[i]--;
			}
			for (int i = 0; i < n; i++) a[i] /= 2;
			cnt++;
			if (*max_element(a.begin(), a.end()) == 0) break;
		}
		cout << cnt - 1 << endl;
	}
	return 0;
}