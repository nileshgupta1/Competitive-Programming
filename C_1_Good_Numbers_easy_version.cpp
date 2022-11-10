#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, sum = 0, n;
        cin >> n;
        for (i = 0; sum < n; ++i)
            sum += pow(3, i);
        int x = pow(3, i);
        while (x > 0)
        {
            if (sum - x >= n)
                sum -= x;
            x /= 3;
        }
        cout << sum << endl;
    }
}
