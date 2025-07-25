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
int n, h;
struct node{
    int data;
    node *left, *right;
};
node *makeNode(int x){
    node* newNode = new node;
    newNode->data=x;
    newNode->left = newNode->right=NULL;
    return newNode;
}
node *insert(node *cur, int x){
    if(cur==NULL){
        cur=makeNode(x);
        return cur;
    }
    if(x<cur->data){
        cur->left=insert(cur->left, x);
    }
    else cur->right=insert(cur->right, x);
    return cur;
}
void duyet(node *cur, int height){
    if(cur==NULL)   return;
    h=max(h, height);
    duyet(cur->left, height+1);
    duyet(cur->right, height+1);
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        h=0;
        cin >> n;
        node *root;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            if(i==0)    root=makeNode(x);
            else    root=insert(root, x);
        }
        duyet(root, 0);
        cout << h << "\n";
    }
}