#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, x;
    cin >> n;
    vector<int> le, chan;
    for(int i=0; i<n; i++){
        cin >> x;
        if(i%2==0) le.push_back(x);
        else chan.push_back(x);
    }
    sort(le.begin(), le.end());
    sort(chan.begin(), chan.end(), greater<int>());
    int l=0;
    while(l<le.size() && l<chan.size()){
        cout << le[l] << " " << chan[l] << " ";
        l++;
    }
    while(l<le.size())   cout << le[l++] << " ";
    while(l<chan.size())    cout << chan[l++] << " ";
}