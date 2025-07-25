#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    vector<int> v;
    int x;
    while(cin >> s){
        if(s=="push"){
            cin >> x;
            v.push_back(x);
        }
        else if(s=="pop"){
            if(s.size())    v.pop_back();
        }
        else{
            if(v.size()){
                for(int i : v)  cout << i << " ";
            }
            else cout << "empty";
            cout << "\n";
        }
    }
}