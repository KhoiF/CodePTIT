#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        int n=s.size();
        string res="";
        for(int i=0; i<n; i++){
            res+=s[i];
            if(res.size()>=3 && res[res.size()-3]=='1' && res[res.size()-2]=='0' && res[res.size()-1]=='0'){
                for(int j=0; j<3; j++)  res.pop_back();
            }
        }
        if(n-res.size()>0)  cout << n-res.size() << "\n";
        else cout << endl;
    }
}