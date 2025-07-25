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
int t, n, s, a[105][105], b[105][105], degin[105], degout[105];
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
			if(!visited[i] && (b[u][i] || b[i][u] )){
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
		int ok=0;
		for(int i=1; i<=n; i++){
			if(a[u][i]){
				ok=1;
				st.push(i);
				a[u][i]=0;
				break;
			}
		}
		if(!ok){
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
		for(int i=1; i<=n; i++){
			int cnt;
			cin >> cnt;
			for(int j=1; j<=cnt; j++){
				int x;
				cin >> x;
				a[i][x]=1;
				b[i][x]=b[x][i]=1;
			}
		}
		if(BFS(1)==n){
			int cnt=0, cnt1=0, cnt2=0;
			for(int i=1; i<=n; i++){
				for(int j=1; j<=n; j++){
					if(a[i][j]){
						degin[j]++;
						degout[i]++;
					}
				}
			}
			for(int i=1; i<=n; i++){
				if(degin[i]==degout[i])	cnt++;
				else if(degin[i]-degout[i]==1)	cnt1++;
				else if(degin[i]-degout[i]==-1)	cnt2++;
			}
			if(cnt==n)	cout << 1;
			else if(cnt==n-2 && cnt1==1 && cnt2==1)	cout << 2;
			else cout << 0;
		}
		else cout << 0;
	}
	else{
		cin >> n >> s;
		for(int i=1; i<=n; i++){
			int cnt;
			cin >> cnt;
			for(int j=1; j<=cnt; j++){
				int x;
				cin >> x;
				a[i][x]=1;
			}
		}
		EC(s);

	}
}