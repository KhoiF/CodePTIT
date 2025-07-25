#include<bits/stdc++.h>
#include<set>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    set<int> s;
    s.insert(2);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(10);
    s.insert(1);
    for(set<int>iterator::it=s.begin(); it!=s.end(); ++it)
        cout << *it << ' ' ;

}