#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        vector<int> v(n+5),am,duong;
        int maxx=INT_MIN,id;
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i]>maxx){
                maxx=v[i];
                id=i;
            }
        }
        v.insert(v.begin()+id,m);
        for(int i=0; i<=n; i++){
            if(v[i]<0)  am.push_back(v[i]);
            else duong.push_back(v[i]);
        } 
        for(int i=0; i<am.size(); i++)  cout << am[i] << ' ';
        for(int i=0; i<duong.size(); i++)   cout << duong[i] << ' ';
        cout << "\n";
        }
}