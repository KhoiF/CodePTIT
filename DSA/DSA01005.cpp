#include<bits/stdc++.h>

using namespace std;
int t, n, a[11];
void sinh(){
    for(int i=1; i<=n; i++) a[i]=i;
    while(1){
        for(int i=1; i<=n; i++) cout << a[i];
        cout << " ";
        int i=n-1;
        while(i>0 && a[i]>a[i+1])   i--;
        if(i==0){
            cout << "\n";
            return;
        }
        else{
            int j=n;
            while(a[j]<a[i])    j--;
            swap(a[i], a[j]);
            int l=i+1, r=n;
            while(l<r){
                swap(a[l], a[r]);
                l++; r--;
            }
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        sinh();
    }
}