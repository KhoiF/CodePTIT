#include<bits/stdc++.h>

using namespace std;
int t, x;
string s;
void solve(string s){
    int i=s.size()-2;
    while(i>=0 && s[i]>=s[i+1])  i--;
    if(i<0){
        cout << "BIGGEST\n";
        return;
    }
    int j=s.size()-1;
    while(s[j]<=s[i])    j--;
    swap(s[i], s[j]);
    int l=i+1, r=s.size()-1;
    while(l<r)  swap(s[l++], s[r--]);
    cout << s << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> x >> s;
        cout << x << " ";
        solve(s);
    }
}