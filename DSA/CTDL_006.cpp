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
        cin >> n;
        int a[n];
        map<int, int> mp;
        for(int &x : a){
            cin >> x;
            mp[x]++;
        }
        for(int i=0; i<n; i++){
            if(mp[a[i]]!=0){
                cout << a[i] << " ";
                mp[a[i]]=0;
            }
        }       
    }
}