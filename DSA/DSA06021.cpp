#include<bits/stdc++.h>

using namespace std;

int binSearchMin(int a[], int l, int r, int n)
{
    int mid;
    while(l <= r)
    {
        mid = l + (r - l) / 2;
        if(a[mid] > a[n - 1]) l = mid + 1;
        else r = mid - 1;
    }
    return mid;
}

int binSearch(int a[], int l, int r, int x)
{
    int mid;
    while(l <= r)
    {
        mid = l + (r - l) / 2;
        if(a[mid] == x) return mid;
        if(a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return mid;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t = 1, n, m, x, posMin;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        posMin = binSearchMin(a, 0, n - 1, n);
        if(!posMin)
        {
            cout << binSearch(a, 0, n - 1, x) + 1 << endl;
            continue;
        }
        if(x < a[n - 1]) cout << binSearch(a, posMin, n - 1, x) + 1 << endl;
        else cout << binSearch(a, 0, posMin - 1, x) + 1 << endl;
    }
}