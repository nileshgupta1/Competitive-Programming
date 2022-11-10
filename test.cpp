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

void delElement(int **a, int n, int val)
{
    int *b = *a - 1;
    ;
    if (*a[0] == val)
    {
        int *c = *a + 1;
        return delElement(&c, n - 1, val);
    }
    else
    {
        *b = *a[0];
    }
    *a = b;
}

int main()
{
    int a[50], i;
    int *ptr = a;
    fo(i, 50) a[i] = i + 1;
    delElement(&ptr, 50, 2);
    fo(i, 50) cout << a[i] << endl;
    cout << endl;
}