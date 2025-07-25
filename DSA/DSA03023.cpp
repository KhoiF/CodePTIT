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
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    //cin >> test;
    while(test--){
        int n;
        string s;
        cin >> n >> s;
        int X=0, D=0;
        for(char c : s){
            if(c=='X')  X++;
            if(c=='D')  D++;
        }
        int difX=0, difD=0, XD=0, DX=0;
        for(int i=0; i<X; i++){
            if(s[i]!='X')   difX++;
            if(s[i]=='D')   XD++;
        }
        for(int i=n-1; i>=n-D; i--){
            if(s[i]!='D')   difD++;
            if(s[i]=='X')   DX++;
        }
        cout << difD+difX-min(DX, XD);
    }
}