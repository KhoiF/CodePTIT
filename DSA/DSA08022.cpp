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
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        vector<int> res;
        priority_queue<int, vector<int>, greater<int>> q1, q2;
        int sum=0;
        for(int i=1; i<=n; i++){
            int x;
            cin >> x;
            sum+=x;
            if(x%3==0)  res.pb(x);
            else if(x%3==1) q1.push(x);
            else q2.push(x);
        }
        if(sum%3==1){
            if(q1.size())   q1.pop();
            else if(q2.size()>=2){
                q2.pop();
                q2.pop();
            }
            else{
                cout << "-1\n";
                continue;
            }
        }
        else if(sum%3==2){
            if(q2.size())   q2.pop();
            else if(q1.size()>=2){
                q1.pop();
                q1.pop();
            }
            else{
                cout << "-1\n";
                continue;
            }
        }
        while(q1.size()){
            res.pb(q1.top());
            q1.pop();
        }
        while(q2.size()){
            res.pb(q2.top());
            q2.pop();
        }
        if(res.size()){
            sort(res.begin(), res.end(), greater<int>());
            for(int i : res)    cout << i;
            cout << "\n";
        }
        else cout << "-1\n";
    }
}