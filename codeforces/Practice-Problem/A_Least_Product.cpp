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
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    bool negative = false;
    bool zero = false;

    for (int i : a)
    {
        if (i < 0)
        {
            negative = !negative;
        }
        else if (i > 0)
        {
            continue;
        }
        else
        {
            zero = true;
        }
    }

    if (zero || negative)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
        cout << "1 0" << endl;
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