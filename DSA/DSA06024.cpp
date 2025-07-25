#include <bits/stdc++.h>
using namespace std;

void selectionsort(int a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int index = i;
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[index]) 
                index = j;
        }
        swap(a[i], a[index]);
        
        cout << "Buoc " + to_string(i + 1) + ": ";
        for (int j = 0; j < n; ++j) {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int a[n];
    for (int &i : a) cin >> i;
    selectionsort(a, n);
}