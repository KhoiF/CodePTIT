#include<bits/stdc++.h>

using namespace std;
bool cmp(string s1, string s2){
    string a=s1+s2,b=s2+s1;
    return stoll(a)>stoll(b);
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<string> v(n);
        for(int i=0; i<n; i++)  cin >> v[i];
        sort(v.begin(),v.end(),cmp);
        for(int i=0; i<n; i++)  cout << v[i];
        cout << endl;
    }
}