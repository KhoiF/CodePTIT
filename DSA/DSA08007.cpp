#include<bits/stdc++.h>

using namespace std;
int t;
long long n;
vector<long long> v;
void Sinh(){
    queue<long long> q;
    long long maxn=5e18;
    q.push(1);
    while(1){
        long long tmp=q.front();
        if(tmp>maxn)    return;
        v.push_back(tmp);
        q.pop();
        q.push(tmp*10);
        q.push(tmp*10+1);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    Sinh();
    while(t--){
        int res=0;
        cin >> n;
        for(long long i : v){
            if(i<=n) res++;
            else break;
        }
        cout << res << "\n";
    }
}