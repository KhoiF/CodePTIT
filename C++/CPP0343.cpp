#include<bits/stdc++.h>

using namespace std;
signed main()
{
    // ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int chan=0,le=0;
        char c=' ';
        int tmp;
        while(c==' ')
        {
            cin >> tmp;
            if(tmp%2)   le++;
            else chan++;
            c=getchar();
        }
        if(chan>le && (chan+le)%2==0)   cout << "YES";
        else if(le>chan && (chan+le)%2==1)  cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}