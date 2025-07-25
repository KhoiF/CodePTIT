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
    node *left;
    node *right;
};
node *makeNode(int x){
    node *newNode=new node;
    newNode->data=x;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
void addNode(node *cur, int parent, int child, char c){
    if(cur==NULL)   return;
    if(cur->data==parent){
        if(c=='L')  cur->left=makeNode(child);
        else cur->right=makeNode(child);
    }
    else{
        addNode(cur->left, parent, child, c);
        addNode(cur->right, parent, child, c);
    }
}
ll sum;
bool isLeaf(node* root)
{
    return root -> left == root -> right and root -> left == NULL;
}

inline void calc(node* root)
{
    if(root == NULL)
        return;
    if(root -> right != NULL and isLeaf(root -> right))
        sum += root -> right -> data;
    if(root -> right != NULL and !isLeaf(root -> right))
        calc(root -> right);
    if(root -> left != NULL and !isLeaf(root -> left))
        calc(root -> left);
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
            int x, y;
            char c;
            cin >> x >> y >> c;
            if(i==1){
                root=makeNode(x);
                addNode(root, x, y, c);
            }
            else addNode(root, x, y, c);
        }    
        sum=0;
        calc(root);  
        cout << sum << "\n";
        free(root);
    }
}