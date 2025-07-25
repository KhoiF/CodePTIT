#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n;
        deque<int> q;
        while(n--){
            cin >> x;
            if(x==1)    cout << q.size() << "\n";
            else if(x==2){
                if(!q.empty())  cout << "NO\n";
                else cout << "YES\n";
            }
            else if(x==3){
                int tmp;
                cin >> tmp;
                q.push_back(tmp);
            }
            else if(x==4){
                if(!q.empty())  q.pop_front();
            }
            else if(x==5){
                if(!q.empty())  cout << q.front();
                else cout << -1;
                cout << "\n";
            }
            else{
                if(!q.empty())  cout << q.back();
                else cout << -1;
                cout << "\n";
            }
        }
    }
}