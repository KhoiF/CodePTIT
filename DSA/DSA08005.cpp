#include<bits/stdc++.h>

using namespace std;
int t, n;
vector<string> v(100001);
void sinh(){
    v[0]="";
    queue<string> q;
    int cnt=1;
    q.push("1");
    while(1){
        string tmp=q.front();
        q.pop();
        v[cnt++]=tmp;
        if(cnt>100000)  return;
        q.push(tmp+"0");
        q.push(tmp+"1");
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    sinh();
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++) cout << v[i] << " ";
        cout << "\n";
    }
}