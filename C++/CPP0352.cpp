#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    vector<string> res;
    int n;
    cin >> n;
    cin.ignore();
    for(int i=0; i<n; i++){
        getline(cin, s);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        stringstream ss(s);
        string tmp,ans="";
        vector<string> v;
        while(ss >> tmp)
        {
            v.push_back(tmp);
        }
        ans+=v.back();
        for(int i=0; i<v.size()-1; i++)
        {
            ans+=v[i][0];
        }
        res.push_back(ans);
    }
    for(int i=0; i<n; i++){
        int d=0;
        for(int j=0; j<i; j++){
            if(res[j]==res[i])  d++;
        }
        cout << res[i];
        if(d>0) cout << d+1;
        cout << "@ptit.edu.vn\n";
    }
}