#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n;
        queue<int> q;
        for(int i=1; i<=n; i++){
            cin >> x;
            q.push(x);
        }
        int cnt=n, tmp;
        while(1){
            cout << '[';
            for(int i=0; i<cnt; i++){
                tmp=q.front(); q.pop();
                if(i!=cnt-1) q.push(tmp+q.front());
                cout << tmp;
                if(i!=cnt-1)    cout << " ";
                else cout << "]\n";
            }
            cnt--;
            if(cnt==0)  break;
        }
    }
}