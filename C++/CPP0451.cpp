#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,k,x;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)  cin >> v[i];
        cin >> k >> x;
        k/=2;
        auto it=lower_bound(v.begin(),v.end(),x);
        it=it-k;
        for(int i=1; i<=k; i++){
            cout << *it << ' ';
            it++;
        }
        it++;
        for(int i=1; i<=k; i++)
        {
            cout << *it << ' ';
            it++;
        }
        cout << endl;
    }
}