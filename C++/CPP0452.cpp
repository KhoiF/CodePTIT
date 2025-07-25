#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n1,n2,n3;
    cin >> t;
    while(t--)
    {
        cin >> n1 >> n2 >> n3;
        vector<long long> a(n1),b(n2),c(n3);
        for(int i=0; i<n1; i++) cin >> a[i];
        for(int i=0; i<n2; i++) cin >> b[i];
        for(int i=0; i<n3; i++) cin >> c[i];
        bool ok=0;
        int i=0,j=0,k=0;
        while(i<n1 && j<n2 && k<n3)
        {
            if(a[i]==b[j] && b[j]==c[k])
            {
                ok=1;
                cout << a[i] << ' ';
                i++;j++;k++;
            }
            else if(a[i] < b[j])    i++;
            else if(b[j] < c[k])    j++;
            else k++;
        }
        if(!ok) cout <<"-1";
        cout << endl;
    }
}