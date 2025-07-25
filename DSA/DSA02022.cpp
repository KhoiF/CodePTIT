#include<bits/stdc++.h>

using namespace std;

string s = "2000";
char a[2] = {'0', '2'};
vector<string> d, y;

void Try(int i)
{
    if(i==4){
        y.push_back(s);
        return;
    }
    for(int j = 0; j < 2; ++j)
    {
        s[i] = a[j];
        Try(i + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    d.push_back("02");
    d.push_back("20");
    d.push_back("22");
    Try(1);
    for(string &i : d) for(string &j : y) cout << i << "/02/" << j << "\n";
    return 0;
}