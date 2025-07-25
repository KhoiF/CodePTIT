#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(mp.count(a[i]))  mp[a[i]]+=1;
            else mp[a[i]]=1;
        }
        int check=0;
        for(int i=0; i<n; i++){
            if(mp[a[i]]>1){
                cout << a[i];
                check=1;
                break;
            }
        } 
        if(!check)  cout << "NO";
        cout << endl;
    }
}