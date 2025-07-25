#include<bits/stdc++.h>
using namespace std;
signed main() {
    int n, m, vote;
    cin >> n >> m;
    vector<int> votes(m + 1, 0); 
    for (int i = 0; i < n; i++) {
        cin >> vote;
        votes[vote]++;
    }
    int first = 0, second = 0;
    for (int i = 1; i <= m; i++) {
        if (votes[i] > first) {
            second = first;
            first = votes[i];
        } else if (votes[i] > second && votes[i] < first) {
            second = votes[i];
        }
    }
    if (second == 0) {
       cout << "NONE" << endl; 
    } else {
        int winner = m + 1; 
        for (int i = 1; i <= m; i++) {
            if (votes[i] == second) {
                winner = min(winner, i); 
            }
        }
        cout << winner << endl; 
    }

    return 0;
}