#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> s;
        int check=0;
        int n=s.size();
        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='1' && (n-i)%4==1) check=(check+6)%10;
            if(s[i]=='1' && (n-i)%4==2) check=(check+2)%10;
            if(s[i]=='1' && (n-i)%4==3) check=(check+4)%10;
            if(s[i]=='1' && (n-i)%4==0) check=(check+8)%10;
        }
        if(s[s.size()-1]=='1')  check=(check+1)%10;
        if(check%5==0)  cout << "Yes\n";
        else cout << "No\n";
    }
}
// 1  1  1 1 1 1
// 32 16 8 4 2 1
// 1 /2 4 8 16 /32 64 128 256