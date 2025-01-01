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
    int p;
    ll sum = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> p;
        sum += p;
    }

    ll squareRoot = sqrt(sum);

    if (squareRoot * squareRoot == sum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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