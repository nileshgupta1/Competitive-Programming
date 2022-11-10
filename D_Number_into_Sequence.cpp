#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, t;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll b = 1, j;
        for (ll i = 2; i * i <= n; i++)
        {
            ll m = n, temp = 0;
            while (m % i == 0)
            {
                m /= i;
                temp++;
            }
            if (temp > b)
            {
                b = temp;
                j = i;
            }
        }
        cout << b << endl;
        for (ll i = 1; i < b; i++)
        {
            cout << j << ' ';
            n /= j;
        }
        cout << n << endl;
    }
}