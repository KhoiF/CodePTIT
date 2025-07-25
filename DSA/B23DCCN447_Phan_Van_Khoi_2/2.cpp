#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
int n;
vector<string> v;
void sinh(){
    queue<string> q;
    q.push("6");
    q.push("8");
    while(1){
        string u=q.front();
        if(u.size()==15)    return;
        q.pop();
        v.pb(u);
        q.push(u+"6");
        q.push(u+"8");
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    sinh();
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n;
        int cnt=0;
        for(string i : v){
            if(i.size()>n)  break;
            else    cnt++;
        }
        cout << cnt << "\n";
        for(int i=0; i<cnt; i++)    cout << v[i] << " ";
        cout << "\n";
    }
}