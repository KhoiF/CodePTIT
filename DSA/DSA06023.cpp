#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n;
    int a[n];
    for (int &i : a) cin >> i;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[i])
                swap(a[i], a[j]);
        }
        cout << "Buoc " + to_string(i + 1) + ": ";
        for (int j = 0; j < n; ++j) {
            cout << a[j] << " ";
        }
        cout << "\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    testCase();
}