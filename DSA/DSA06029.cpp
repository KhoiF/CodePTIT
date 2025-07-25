#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int a[n], b[n];
    vector<int> v[n];
    for(int &x : a) cin >> x;
    for(int i=0; i<n; i++){
        if(i==0)    b[i]=a[i];
        else{
            int j=0;
            while(j<i && b[j]<a[i])    j++;
            for(int k=i; k>j; k--)  b[k]=b[k-1];
            b[j]=a[i];
        }
        for(int j=0; j<=i; j++) v[i].push_back(b[j]);
    }
    for(int i=n-1; i>=0; i--){
        cout << "Buoc " << i << ": ";
        for(int x : v[i])   cout << x << " ";
        cout << "\n";
    }
}