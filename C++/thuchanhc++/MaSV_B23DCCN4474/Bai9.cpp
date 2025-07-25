#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n;
    long long tmp;
    string s;
    cin >> t;
    while(t--){
        cin.ignore();
        getline(cin ,s);
        cin >> n;
        long long sum=0;
        for(int i=0; i<n; i++){
            cin >> tmp;
            if(tmp<0)   sum+=tmp;
        }
        if(sum <=-100000000)    cout << "YES\n";
        else cout << "NO\n";
    }
}