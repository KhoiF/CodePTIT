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
struct Node{
    int data;
    Node* Left;
    Node* Right;
};
Node* makeNode(int x){
    Node *newNode = new Node;
    newNode -> data=x;
    newNode -> Left = newNode -> Right = NULL;
    return newNode;
}
void addNode(Node* cur, int pa, int child, char c){
    if(cur==NULL){
        return;
    }
    if(cur->data==pa){
        if(c=='L'){
            cur->Left=makeNode(child);
        }
        else{
            cur->Right=makeNode(child);
        }
    }
    else{
        addNode(cur->Left, pa, child, c);
        addNode(cur->Right, pa, child, c);
    }

}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        Node* Root;
        for(int i=1; i<=n; i++){
            int x, y;
            char c;
            cin >> x >> y >> c;
            if(i==1)    Root=makeNode(x);
            addNode(Root, x, y, c);
        }
        queue<Node*> q;
        q.push(Root);
        while(q.size()){
            Node* u=q.front();
            q.pop();
            cout << u->data << " ";           
            if(u->Left != NULL) q.push(u->Left);
            if(u->Right != NULL) q.push(u->Right);
        }
        cout << "\n";
    }
}