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
int n, in[1005], pre[1005];
int Find(int n, int in[], int x){
    for(int i=0; i<n; i++){
        if(in[i]==x)    return i;
    }
    return -1;
}
void postorder(int n, int in[], int pre[]){
    int root=pre[0];
    int pos=Find(n, in, root);
    if(pos>0)   postorder(pos, in, pre+1);
    if(pos<n-1) postorder(n-pos-1, in+pos+1, pre+pos+1);
    cout << root << " ";
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n;
        for(int i=0; i<n; i++)  cin >> in[i];
        for(int i=0; i<n; i++)  cin >> pre[i];
        postorder(n, in, pre);
        cout << "\n";
    }
}