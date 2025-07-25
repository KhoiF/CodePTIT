#include<bits/stdc++.h>

using namespace std;
int t, n;
vector<string> v;
void Sinh(){
    queue<string> q;
    q.push("6");
    q.push("8");
    while(1){
        string tmp=q.front();
        q.pop();
        if(tmp.size()>15)    return;
        v.push_back(tmp);
        q.push(tmp+"6");
        q.push(tmp+"8");
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    Sinh();
    while(t--){
        cin >> n;
        for(int i=v.size()-1; i>=0; i--){
            if(v[i].size()<=n)  cout << v[i] << " ";
            else continue;
        }
        cout << "\n";
    }
}