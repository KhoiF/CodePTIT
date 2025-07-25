#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    set<string> se;
    string tmp;
    while(n--){
        
        getline(cin, tmp);
        se.insert(tmp);
    }
    cout << se.size();
}