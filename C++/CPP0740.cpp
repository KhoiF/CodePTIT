#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t, n; 
    cin >> t;
	while (t--)
	{
		cin >> n;
		vector<ll> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		ll ans = -1e9, tich;
		int l = 0;
		for (int i = 0; i < n; i++) {
			tich = 1;
			for (int j = i; j < n; j++) {
				tich *= a[j];
				ans = max(ans, tich);
			}
		}
		cout << ans << endl;
	}
	return 0;
}