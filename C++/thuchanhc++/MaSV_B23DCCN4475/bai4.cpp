#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long n, k;
    cin >> n >> k;
    vector<int> v(10000001, 0);
    for(int i=1; i<=k; i++){
        v[n%i]++;
        if(v[n%i]==2){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}