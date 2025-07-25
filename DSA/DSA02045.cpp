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
string s;
int n;
void Try(int i, string t){
    if(i>n) return;
    for(int k=i; k<=n; k++){
        string tmp=t+s[k];
        cout << tmp << " ";
        Try(k+1, tmp);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n >> s;
        s=" "+s;
        Try(1, "");
        cout << "\n";
    }
}