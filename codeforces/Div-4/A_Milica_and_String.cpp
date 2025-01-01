/*
    Morshedul Munna
    Problem link:
*/
#include <bits/stdc++.h>
using namespace std;

/*
 * -> Custom Define for easy to use
 */
#define pii pair<int, int>
#define ll long long
#define endl '\n'
#define map_print(container)                               \
    for (auto &pair : container)                           \
    {                                                      \
        cout << pair.first << "->" << pair.second << endl; \
    }
#define deb(x) cout << #x << " = " << x << endl
#define deb2(x, y) cout << #x << " = " << x << "," << #y << "=" << y << endl
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

/*
 * -> Solving start Here
 */

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    map<char, int> mp;
    for (auto it : s)
    {
        mp[it]++;
    }

    int res;
    for (auto &pair : mp)
    {
        if (pair.first == 'B')
        {
            res = k - pair.second;
        }
    }

    if (res < 0)
    {
        cout << abs(res) << "A" << endl;
    }
    else if (res > 0)
    {
        cout << res << "B" << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int c = 1;
    while (t--)
    {
        // cout<<"Case "<<c++<<": ";
        solve();
    }
    return 0;
}