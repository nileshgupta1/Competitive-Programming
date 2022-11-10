#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        long long a[n][m], b[n][m];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> b[i][j];
            }
        }
        bool flag = 0, out = 0;
        if (n == 1 || m == 1)
        {
            out = 1;
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < m; ++j)
                {
                    if (a[i][j] != b[i][j])
                    {
                        cout << "NO\n";
                        flag = 1;
                        break;
                    }
                }
                if (flag)
                    break;
            }
            if (!flag)
            {
                cout << "YES\n";
                break;
            }
        }
        if (out)
            continue;
        vector<long long> diag1_a, diag2_a, diag1_b, diag2_b;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if ((i % 2 == 0 && j % 2 == 0) || (i % 2 && j % 2))
                {
                    diag1_a.push_back(a[i][j]);
                    diag1_b.push_back(b[i][j]);
                }
                else
                {
                    diag2_a.push_back(a[i][j]);
                    diag2_b.push_back(b[i][j]);
                }
            }
        }
        sort(all(diag1_a));
        sort(all(diag2_a));
        sort(all(diag1_b));
        sort(all(diag2_b));

        // for (int i : diag1_a)
        //     cout << i << " ";
        // cout << endl;
        // for (int i : diag1_b)
        //     cout << i << " ";
        // cout << endl;
        // for (int i : diag2_a)
        //     cout << i << " ";
        // cout << endl;
        // for (int i : diag2_b)
        //     cout << i << " ";
        // cout << endl;

        if (diag1_a == diag1_b && diag2_a == diag2_b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}