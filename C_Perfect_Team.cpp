#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int c, m, x;
        cin >> c >> m >> x;
        int sum = c + m + x;
        cout << min(min(c, m), sum / 3) << endl;
    }
}