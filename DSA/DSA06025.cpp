#include<bits/stdc++.h>

using namespace std;
void insertionsort(int a[], int n){
    int b[n]={0};
    for(int i=0; i<n; i++){
        cout << "Buoc " << i << ": ";
        if(i==0){
            b[0]=a[0];
            cout << b[0] << "\n";
            continue;
        }
        int j=i-1;
        while(j>=0 && a[i]<b[j]){
            b[j+1]=b[j];
            j--;
        }
        b[j+1]=a[i];
        for(int k=0; k<=i; k++) cout << b[k] << " ";
        cout << "\n";
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    insertionsort(a, n);
}