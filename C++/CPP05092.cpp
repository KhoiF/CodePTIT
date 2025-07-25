#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    for(int i=1; i<n; i++)  cout << ' ';
    cout << "*\n";
    for(int i=2; i<n; i++){
        for(int j=1; j<=n-i; j++)   cout << ' ';
        cout << '*';
        for(int j=1; j<=2*i-3; j++) cout << ' ';
        cout << "*\n";
    }
    for(int i=1; i<=n; i++) cout << "* ";
}
//     * 
//    * * 
//   *   * 
//  *     * 
// * * * * * 
//          * 
//         * * 
//        *   * 
//       *     * 
//      *       * 
//     *         * 
//    *           * 
//   *             * 
//  *               * 
// * * * * * * * * * * 
