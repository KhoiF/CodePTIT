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
int n, in[1005], lev[1005];
struct node{
    int data;
    node *l, *r;
};
node *makeNode(int x){
    node *newNode=new node;
    newNode->data=x;
    newNode->l = newNode->r = NULL;
    return newNode;
}
int Find(int n, int a[], int x){
    for(int i=0; i<n; i++){
        if(a[i]==x) return i;
    }
    return -1;
}
void Insert(node *&cur, int n, int in[], int lev[]){
    cur=makeNode(lev[0]);
    int pos=Find(n, in, lev[0]);
    int L[1005], R[1005], l=0, r=0;
    for(int i=1; i<n; i++){
        int tmp=Find(n, in, lev[i]);
        if(tmp<pos) L[l++]=lev[i];
        else R[r++]=lev[i];
    }
    if(pos>0)   Insert(cur->l, pos, in, L);
    if(pos<n-1) Insert(cur->r, n-pos-1, in+pos+1, R);
}
void duyet(node *cur){
    if(cur==NULL)   return;
    duyet(cur->l);
    duyet(cur->r);
    cout << cur->data << " ";
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n;
        for(int i=0; i<n; i++) cin >> in[i];
        for(int i=0; i<n; i++) cin >> lev[i];
        node *root=NULL;
        Insert(root, n, in, lev);
        duyet(root);
        cout << "\n";
    }
}