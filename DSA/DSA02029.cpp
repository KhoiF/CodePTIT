#include<bits/stdc++.h>

using namespace std;
int n;
char c[]={' ', 'A', 'B', 'C'};
void solve(int n, int i, int j){
    if(n==1){
        cout << c[i] << " -> " << c[j] << "\n";
        return;
    }
    solve(n-1, i, 6-i-j);
    solve(1, i, j);
    solve(n-1, 6-i-j, j);
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n;
    solve(n, 1, 3);
}