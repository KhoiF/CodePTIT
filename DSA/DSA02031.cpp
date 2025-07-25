#include<bits/stdc++.h>

using namespace std;

bool check(char c)
{
    return (c == 'A' or c == 'E');
}

bool ok(string s)
{
    for(int i = 0; i < s.size(); ++i)
    {
        if(check(s[i]))
        {
            if(i == 0 or i == s.size() - 1) continue;
            if(!check(s[i - 1]) and !check(s[i + 1])) return 0;
        }
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s = "ABC";
    char c;
    cin >> c;
    for(char j = 'D'; j <= c; ++j) s += j;
    do
    {
        if(ok(s)) cout << s << endl;
    }
    while(next_permutation(s.begin(), s.end()));
}