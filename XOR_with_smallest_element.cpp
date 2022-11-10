#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int i, n, x, y;
    multiset<int> a;
    cin >> n >> x >> y;

    for (i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    while (y)
    {
        int temp = *a.begin() ^ x;
        if (temp > *a.begin())
        {
            a.erase(a.begin());
            a.insert(temp);
            y--;
        }
        else
        {
            if (y % 2)
            {
                a.erase(a.begin());
                a.insert(temp);
                break;
            }
            else
                break;
        }
    }
    for (auto it : a)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
