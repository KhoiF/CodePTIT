#include<bits/stdc++.h>

using namespace std;
int t, n, k;
bool check(string s){
    int cnt=0;
    for(char c : s) cnt+=(c=='1');
    if(cnt==k)  return true;
    else return false; 
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> k;
        string s;
        for(int i=1; i<(1<<n); i++){
            s=bitset<16>(i).to_string();
            s.erase(0, 16-n);
            if(check(s))    cout << s << "\n";
        }
    }
}