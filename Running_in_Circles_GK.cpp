#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))

int main()
{
    int t;
    cin >> t;
    for (int case_num = 1; case_num <= t; case_num++)
    {
        int i, j;
        ll l, n;
        cin >> l >> n;
        ll extra = 0, laps = 0;
        char dir = 'C';
        while (n--)
        {
            ll d;
            char c;
            cin >> d >> c;
            if (c == dir)
            {
                laps += (d + extra) / l;
                extra = (d + extra) % l;
                dir = c;
            }
            else
            {
                if (d < extra)
                {
                    extra = extra - d;
                }
                else
                {
                    d -= extra;
                    laps += (d + 0) / l;
                    extra = (d + 0) % l;
                    dir = c;
                }
            }
        }

        cout << "Case #" << case_num << ": ";

        cout << laps << endl;
    }
}
