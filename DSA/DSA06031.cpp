#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, k, a[100005];
    cin >> t;
    while(t--){
        int res[n+1];
        cin >> n >> k;
        for(int i=1; i<=n; i++) cin >> a[i];
        deque<int> q;
        for(int i=1; i<=n; i++){
            while(q.size() && a[i]>=a[q.back()])    q.pop_back();
            q.push_back(i);
            while(i-q.front()>=k)   q.pop_front();
            if(i>=k)    cout << a[q.front()] << " ";
        }
        cout << "\n";
    }
}