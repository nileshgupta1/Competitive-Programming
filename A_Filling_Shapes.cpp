#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2)
    {
        cout << 0;
    }
    else
    {
        long long a = pow(2, n / 2);
        cout << a;
    }
}