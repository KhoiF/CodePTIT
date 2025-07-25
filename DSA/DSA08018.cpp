#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    vector<string> v;
    queue<string> q;
    q.push("6");
    q.push("8");
    while(q.size()){
        string tmp=q.front();
        q.pop();
        v.push_back(tmp);
        if(tmp.size()==15)  break;
        q.push(tmp+string(1, '6'));
        q.push(tmp+string(1, '8'));
    }
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int cnt=0;
        string res="";
        for(string x : v){
            if(x.size()>n) break;
            cnt++;
            res=res+x+" ";
        }
        cout << cnt << "\n" << res;
        cout << "\n";
    }
}