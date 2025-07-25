#include<bits/stdc++.h>

using namespace std;
int t, n, x;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        priority_queue<long long, vector<long long>, greater<long long>>   pq;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> x;
            pq.push(x);
        }
        long long res=0;
        while(pq.size()>1){
            long long tmp1=pq.top(); pq.pop();
            long long tmp2=pq.top(); pq.pop();
            res+=tmp1+tmp2;
            pq.push(tmp1+tmp2);
        }
        cout << res << "\n";
    }
}