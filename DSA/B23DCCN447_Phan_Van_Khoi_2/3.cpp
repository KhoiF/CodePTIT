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
int n, a[1005];
struct node{
    int data;
    node *left, *right;
};
node *makeNode(int x){
    node *newNode=new node;
    newNode->data=x;
    newNode->left = newNode->right=NULL;
    return newNode;
}
node *insertNode(node *cur, int x){
    if(cur==NULL){
        cur=makeNode(x);
        return cur;
    }
    if(x<cur->data) cur->left=insertNode(cur->left, x);
    else    cur->right=insertNode(cur->right, x);
    return cur;
}
void duyet(node *cur){
    if(cur==NULL)   return;
    duyet(cur->left);
    duyet(cur->right);
    cout << cur->data << " ";
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        node *root=makeNode(a[1]);
        for(int i=2; i<=n; i++){
            root=insertNode(root, a[i]);
        }
        duyet(root);
        cout << "\n";
    }
}