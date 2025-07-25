#include<bits/stdc++.h>

using namespace std;
int x;
int hieu(int n)
{
    return abs(n-x);
}
bool cmp(int a, int b)
{
    if(hieu(a)<hieu(b))    return true;
    return false;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        vector<int> a(n);
        for(int i=0; i<n; i++)  cin >> a[i];
        stable_sort(a.begin(),a.end(),cmp);
        for(int i=0; i<n; i++)  cout << a[i] << ' ';
        cout << endl;
    }
}