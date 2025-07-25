#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int q;
    string s;
    cin >> q;
    queue<int> qu;
    while(q--){
        cin >> s;
        if(s=="PUSH"){
            int x;
            cin >> x;
            qu.push(x);
        }
        else if(s=="POP"){
            if(!qu.empty()) qu.pop();
        }
        else{
            if(qu.empty())  cout << "NONE\n";
            else cout << qu.front() << "\n";
        }
    }
}