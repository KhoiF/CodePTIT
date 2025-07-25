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
int q, x;
string s;
struct node{
    int data;
    node *l, *r;
};
node *makeNode(int x){
    node *newNode = new node;
    newNode->data=x;
    newNode->l = newNode->r = NULL;
    return newNode;
}
node *insert(node *cur, int x){
    if(cur==NULL){
        cur=makeNode(x);
        return cur;
    }
    if(x<cur->data) cur->l=insert(cur->l, x);
    else cur->r = insert(cur->r, x);
    return cur;
}
// Để xóa node của cây nhị phân tìm kiếm ta cần tìm node cần xóa
// Sau đó thay thế node đó bằng node min bên phải hoặc max bên trái
// Chú ý phải xét th node trái = null và th node phải = null
node *del(node *cur, int x){
    if(cur==NULL)   return NULL;
    if(x==cur->data){
        if(cur->l==NULL){
            node *tmp=cur->r;
            delete cur;
            return tmp;
        }
        if(cur->r==NULL){
            node *tmp=cur->l;
            delete cur;
            return tmp;
        }
        node *tmp=cur->r;
        while(tmp->l!=NULL) tmp=tmp->l;
        cur->data=tmp->data;
        cur->r=del(cur->r, tmp->data);
    }
    else if(x<cur->data)    cur->l=del(cur->l, x);
    else cur->r=del(cur->r, x);
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
    //cin >> test;
    while(test--){
        cin >> q;
        node *root=NULL;
        for(int i=1; i<=q; i++){
            cin >> s >> x;
            if(s=="ins") root=insert(root, x);   
            else    root=del(root, x);
            cout << "Query #" << i << ": ";
            duyet(root);
            cout << "\n";
        }
    }
}