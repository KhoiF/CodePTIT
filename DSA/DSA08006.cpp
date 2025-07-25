#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n;
    cin >> t;
    vector<int> v;
    queue<int> q;
    q.push(9);
    while(1){
        int tmp=q.front();
        if(tmp>1e9) break;
        q.pop();
        v.push_back(tmp);
        q.push(tmp*10);
        q.push(tmp*10+9);
    }
    while(t--){
        cin >> n;
        for(int x : v){
            if(x%n==0){
                cout << x << "\n";
                break;
            }
        }
    }
}