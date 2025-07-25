// #include<bits/stdc++.h>

// using namespace std;
// #define maxn 1000005
// #define ll long long
// #define ii pair<int, int>
// #define iii pair<pair<int, int>, int>
// #define pb push_back
// #define bit(mask, i) ((mask>>i)&1)
// const int MOD = 1e9+7;
// const int INF = 0x3f3f3f3f;
// int n, q, c[100005], d[100005];
// ii a[maxn];
// map<int, int> res;
// bool cmp(ii x, ii y){
//     if(x.first == y.first)  return x.second < y.second;
//     else return x.first < y.first;
// }
// signed main()
// {
//     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//     int test = 1;
//     //cin >> test;
//     while(test--){
//         cin >> n;
//         for(int i=1; i<=n; i++){
//             cin >> a[i].first >> a[i].second;          
//         }
//         sort(a+1, a+1+n, cmp);
//         cin >> q;
//         for(int i=1; i<=q; i++){
//             cin >> c[i];
//             d[i]=c[i];
//         }
//         sort(c+1, c+1+q);
//         priority_queue<ii, vector<ii>, greater<ii>> pq;
//         int p1=1, p2=1;
//         while(p1<=n || p2<=q){
//             while(p1<=n && a[p1].first<=c[p2]){
//                 pq.push({a[p1].second, a[p1].first});
//                 p1++;
//             }
//             while(pq.size() && pq.top().first<c[p2]) pq.pop();
//             res[c[p2]]=pq.size();
//             p2++;
//         }
//         for(int i=1; i<=q; i++) cout << res[d[i]] << "\n";
//     }
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n], b[n];
	for(int i=0;i<n;i++){
		cin >> a[i] >> b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	int q; cin >> q;
	while(q--){
		int x; cin >> x;
		int it=upper_bound(a,a+n,x)-a;
		int it1=upper_bound(b,b+n,x-1)-b;
		cout << it-it1 << endl;
	}
}