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
    node *left, *right;
};
node* makeNode(int x){
    node* newNode=new node;
    newNode->data=x;
    newNode->left = newNode->right=NULL;
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
void duyet(node* cur){
    stack<node*> st1, st2;
    st1.push(cur);
    while(st1.size() || st2.size()){
        while(st1.size()){
            node* tmp=st1.top();
            st1.pop();
            cout << tmp->data << " ";
            if(tmp->right!=NULL) st2.push(tmp->right);
            if(tmp->left!=NULL) st2.push(tmp->left);
        }
        while(st2.size()){
            node* tmp=st2.top();
            st2.pop();
            cout << tmp->data << " ";
            if(tmp->left!=NULL) st1.push(tmp->left);
            if(tmp->right!=NULL) st1.push(tmp->right);
        }
    }
    cout << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        node *root;
        for(int i=1; i<=n; i++){
            int u, v;
            char c;
            cin >> u >> v >> c;
            if(i==1)    root=makeNode(u);
            addNode(root, u, v, c);
        }
        duyet(root);
    }
}