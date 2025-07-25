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
struct node{
    int data;
    node *l, *r;
};
node *makeNode(int x){
    node *newNode= new node;
    newNode->data=x;
    newNode->l = newNode->r = NULL;
    return newNode;
}
node *insert(node *cur, int x){
    if(cur==NULL){
        return makeNode(x);
    }
    if(x<cur->data) cur->l=insert(cur->l, x);
    else cur->r=insert(cur->r, x);
    return cur;
}
void duyet(node *cur){
    if(cur==NULL)   return;
    cout << cur->data << " ";
    duyet(cur->l);
    duyet(cur->r);
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n;
        node *root=NULL;
        for(int i=1; i<=n; i++){
            int x;
            cin >> x;
            root=insert(root, x);
        }
        duyet(root);
        cout << "\n";
    }
}