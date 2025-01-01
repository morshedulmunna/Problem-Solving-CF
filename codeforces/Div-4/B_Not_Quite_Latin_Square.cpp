/*
    Morshedul Munna
    Problem link:
*/
#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define ll long long
#define endl '\n'
#define deb(x) cout << #x << " = " << x << endl
#define deb2(x, y) cout << #x << " = " << x << "," << #y << "=" << y << endl
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

void solve()
{
    map<char, int> mp;
    string s;

    for (int i = 0; i < 3; i++)
    {
        cin >> s;
        for (char ch : s)
        {
            mp[ch]++;
        }
    }

    // Printing the contents of the map
    for (const auto &pair : mp)
    {
        // cout << pair.first << ": " << pair.second << endl;

        if (pair.second == 2)
        {
            cout << pair.first << endl;
        }
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