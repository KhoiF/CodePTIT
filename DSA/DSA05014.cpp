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
unsigned long long c[105];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    c[0]=1;
    c[1]=1;
    c[2]=2;
    for(int i=3; i<=100; i++){
        for(int j=0; j<i/2; j++){
            c[i]+=(c[j]*c[i-1-j]);
        }
        if(i%2==0) c[i]*=2;
        else c[i]=c[i]*2+c[i/2]*c[i/2];
    }
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n;
        if(n==0)    cout << "0\n";
        else cout << c[n] << "\n";
    }
}