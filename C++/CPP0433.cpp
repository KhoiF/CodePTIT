#include<bits/stdc++.h>

using namespace std;
bool cmp(pair<int,int> p1, pair<int,int> p2)
{
    if(p1.second==p2.second)
    {
        return p1.first < p2.first;
    }
    else return p1.second > p2.second;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n],d[100001]={0};
        for(int i=0; i<n; i++){
            cin >> a[i];
            d[a[i]]++;
        }
        vector<pair<int,int>> v;
        for(int i=0; i<n; i++)
        {
            if(d[a[i]]>0)
            {
                v.push_back({a[i],d[a[i]]});
                d[a[i]]=0;
            }
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0; i<v.size(); i++)
        {
            for(int j=0; j<v[i].second; j++)    cout << v[i].first << ' ';
        }
        cout << endl;
    }
}