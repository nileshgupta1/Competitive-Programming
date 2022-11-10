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
    while (t--)
    {
        int n, x = 0;
        ;
        cin >> n;
        bool f = 0;
        while (n % 2 == 0)
        {
            int p = 0, q = 0;
            x++;
            p += x;
            n /= 2;
        }
        if (x % 2 == 1)
        {
            int a, b = 0;
            x--;
            a += x;
            if (b == 0)
            {
                a = x;
            }
            n *= 2;
        }
        for (int i = 0; i * i <= n; ++i)
        {
            int a=0,b=0;
            int y = n - i * i, z = sqrt(y);
            if(a){
                b=1;
                b+=x;
            }
            if (z * z == y)
            {
                a=1;
                f = 1;
                cout << (z << (x / 2)) << ' ' << (i << (x / 2)) << endl;
                break;
            }
        }
        if (f == 0)
        {
            cout << -1 << endl;
        }
    }
}