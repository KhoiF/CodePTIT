#include<bits/stdc++.h>

using namespace std;
signed main()
{
    int t;
    string s1,s2;
    cin >> t;
    cin.ignore();
    while(t--){
        getline(cin,s1);
        getline(cin,s2);
        set<string> se1,se2;
        stringstream ss(s1);
        string tmp;
        while(ss >> tmp){
            se1.insert(tmp);
        }
        stringstream s(s2);
        while(s >> tmp){
            se2.insert(tmp);
        }
        for(auto x: se1){
            if(se2.find(x)==se2.end())    cout << x << ' ';
        }
        cout << endl;
    }
}