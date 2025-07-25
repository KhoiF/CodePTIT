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
int ans;
struct node{
    int data;
    node *left, *right;
};
node *makeNode(int x){
    node* newNode= new node;
    newNode->data=x;
    newNode -> left = newNode->right =NULL;
    return newNode;
}
void addNode(node* cur, int pa, int child, char c){
    if(cur==NULL)   return;
    if(cur->data==pa){
        if(c=='L')  cur->left=makeNode(child);
        else cur->right=makeNode(child);
    }
    addNode(cur->left, pa, child, c);
    addNode(cur->right, pa, child, c);
}
int DFS(node* cur){
    if(cur==NULL)   return 0;
    int sumleft=DFS(cur->left);
    int sumright=DFS(cur->right);
    if(cur->left==NULL && cur->right==NULL){
        return cur->data;
    }
    if(cur->left==NULL){
        return sumright+cur->data;
    }
    if(cur->right==NULL){
        return sumleft+cur->data;
    }
    ans=max(ans, sumleft+sumright+cur->data);
    return max(sumleft, sumright)+cur->data;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        ans=INT_MIN;
        int n;
        cin >> n;
        node *root;
        for(int i=0; i<n; i++){
            int x, y;
            char c;
            cin >> x >> y >> c;
            if(i==0)    root=makeNode(x);
            addNode(root, x, y, c);
        }
        int ok=DFS(root);
        cout << ans << "\n";
    }
}