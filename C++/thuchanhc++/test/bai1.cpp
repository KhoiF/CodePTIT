#include<bits/stdc++.h>

using namespace std;
// class ThiSinh{
//     public:
//         string ten, ns;
//         double d1, d2, d3;

// };
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string name, date;
    double gpa1, gpa2, gpa3;
    getline(cin, name);
    cin >> date >> gpa1 >> gpa2 >> gpa3;
    cout << name << " " << date << " ";
    cout << fixed << setprecision(1) << (gpa1+gpa2+gpa3);
}