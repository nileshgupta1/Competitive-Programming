#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define fin for (i = 0; i < n; i++)

void solve(void)
{
    int n, i;
    cin >> n;
    ll sum = 0;
    vll b(n + 2);
    int ans = (n + 2);
    for (i = 0; i < (n + 2); i++)
    {
        cin >> b[i];
        sum += b[i];
    }
    // cout << sum << "\n";
    sort(b.begin(), b.end());
    if ((sum - b[n + 1]) == (2 * b[n]))
        ans = n;
    sum -= b[n + 1];
    for (i = 0; i <= n; i++)
    {
        if (sum - b[i] == b[n + 1])
        {
            ans = i;
            break;
        }
    }
    // cout << ans << "\n";
    if (ans == n)
    {
        for (i = 0; i < n; i++)
            cout << b[i] << ' ';
        cout << "\n";
    }
    else if (ans == (n + 2))
        cout << -1 << "\n";
    else
    {
        for (i = 0; i < (n + 1); i++)
        {
            if (i != ans)
                cout << b[i] << ' ';
        }
        cout << "\n";
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}