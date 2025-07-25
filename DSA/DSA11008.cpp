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
struct node{
    int data;
    node* left;
    node* right;
};
node* makeNode(int x){
    node* newNode= new node;
    newNode->data=x;
    newNode->left = newNode->right = NULL;
    return newNode;
}
void addNode(node* cur, int pa, int child, char c){
    if(cur==NULL)   return;
    if(cur->data == pa){
        if(c=='L')  cur->left=makeNode(child);
        else cur->right=makeNode(child);
    }
    addNode(cur->left, pa, child, c);
    addNode(cur->right, pa, child, c);
}
int h, ok;
void DFS(node* cur, int height){
    if(ok==0)   return;
    if(cur==NULL)   return;
    if(cur->left==NULL && cur->right==NULL){
        if(h==0)    h=height;
        else if(h!=height){
            ok=0;
            return;
        }
    }
    DFS(cur->left, height+1);
    DFS(cur->right, height+1);

}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        h=0, ok=1;
        int n;
        cin >> n;
        node* root;
        for(int i=1; i<=n; i++){
            int u, v;
            char c;
            cin >> u >> v >> c;
            if(i==1){
                root=makeNode(u);
            }
            addNode(root, u, v, c);
        }
        DFS(root, 0);
        if(ok)  cout << "1\n";
        else cout << "0\n";
    }
}