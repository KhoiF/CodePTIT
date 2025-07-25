#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, xx;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        map<int, int> mp;
        for(int &x : a){
            cin >> x;
            mp[x]++;
        }
        int check=0;
        for(int i : a){
            if(mp[i]==2){
                cout << i;
                check=1;
                break;
            }
        }
        if(!check)  cout << "NO";
        cout << "\n";
    }
}