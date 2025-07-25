#include<bits/stdc++.h>

using namespace std;
int n;
int a[35] = {};
vector<string> vs;
vector<int> tmp;

inline void print()
{
    string s = "";
    for(int &i : tmp) s += to_string(i) + ' ';
    vs.push_back(s);
}

inline void Try(int i)
{
    for(int j = i + 1; j <= n; ++j)
    {
        if(a[j] > a[i])
        {
            tmp.push_back(a[j]);
            if(tmp.size() > 1) print();
            Try(j);
            tmp.pop_back();
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    Try(0);
    sort(vs.begin(), vs.end());
    for(string &i : vs) cout << i << "\n";
}