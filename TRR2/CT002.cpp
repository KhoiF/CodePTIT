#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<int, pair<int, int>>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
int t, n, s, a[105][105];
bool visited[105];
int BFS(int x){
	queue<int> q;
	q.push(x);
	visited[x]=1;
	int cnt=1;
	while(q.size()){
		int u=q.front();
		q.pop();
		for(int i=1; i<=n; i++){
			if(a[u][i] && !visited[i]){
				q.push(i);
				visited[i]=1;
				cnt++;
			}
		}
	}
	return cnt;
}
void EC(int x){
	stack<int> st;
	vector<int> v;
	st.push(x);
	while(st.size()){
		int u=st.top();
		int cnt=0;
		for(int i=1; i<=n; i++)	cnt+=a[u][i];
		if(cnt){
			for(int i=1; i<=n; i++){
				if(a[u][i]){
					st.push(i);
					a[u][i]=a[i][u]=0;
					break;
				}
			}
		}
		else{
			v.pb(u);
			st.pop();
		}
	}
	for(int i=v.size()-1; i>=0; i--)	cout << v[i] << " ";
}
signed main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin >> t;
	if(t==1){
		cin >> n;
		int le=0;
		for(int i=1; i<=n; i++){
			int dem=0;
			for(int j=1; j<=n; j++){
				cin >> a[i][j];
				dem+=a[i][j];
			}
			le+=dem%2;
		}
		if(BFS(1)==n){
			if(le==0)	cout << 1;
			else if(le==2)	cout << 2;
			else cout << 0;
		}
		else cout << 0;
	}
	else{
		cin >> n >> s;
		int le=0;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				cin >> a[i][j];
				
			}
		}
		EC(s);
	}
}