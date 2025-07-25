#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    string s;
    cin >> t;
    while(t--){
        cin >> n;
        cin.ignore();
        getline(cin,s);
        vector<string> v;
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
            tmp[0]=toupper(tmp[0]);
            v.push_back(tmp);
        }
        if(n==1){
            cout << v.back() << ' ';
            for(int i=0; i<v.size()-1; i++) cout << v[i] << ' ';
        }
        else{
            for(int i=1; i<v.size(); i++)   cout << v[i] << ' ';
            cout << v[0];
        }
        cout << endl;

    }
}