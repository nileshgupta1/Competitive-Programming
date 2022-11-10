#include <bits/stdc++.h>
#include <random>
#include <chrono>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define sf(x) scanf("%f", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define pf(x) printf("%f\n", x)
#define ps(s) printf("%s\n", s)
#define prec(x, y) fixed << setprecision(y) << x
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define mk(arr, n, type) type *arr = new type[n]
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim)
{
    uniform_int_distribution<int> uid(0, lim - 1);
    return uid(rang);
}
const int mod = 1'000'000'007;
int mpow(int base, int exp, int mo = mod);
void ipgraph(int n, int m);
void dfs(int u, int par);
void clearg();

const int N = 1e5 + 10, M = N;
const int INF = 1e9 + 10;
//=======================

vi g[N];
bool vis[N];

void solve()
{
    ll i, j, n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;
    if ((sy - 1 > d && n - sx > d) || (sx - 1 > d && m - sy > d))
    {
        cout << n + m - 2 << endl;
    }
    else
        cout << -1 << endl;
}

void c_p_c()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    c_p_c();

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

int mpow(int base, int exp, int mo)
{
    base %= mo;
    int result = 1;
    while (exp > 0)
    {
        if (exp & 1)
            result = ((ll)result * base) % mo;
        base = ((ll)base * base) % mo;
        exp >>= 1;
    }
    return result;
}

void clearg()
{
    int i;
    fo(i, N)
    {
        g[i].clear();
        vis[i] = false;
    }
}

void ipgraph(int n, int m)
{
    int i, u, v;
    while (m--)
    {
        cin >> u >> v;
        u--, v--;
        g[u].pb(v);
        g[v].pb(u);
    }
}

void dfs(int u, int par)
{
    // action on vertex after entering it
    vis[u] = true;
    for (int v : g[u])
    {
        // action on child before entering it
        if (v == par)
            continue;
        if (vis[v])
            continue;
        dfs(v, u);
        // action on child after exiting child
    }
    // action on vertex before exiting it
}

vector<bool> isPrime(N, 1);
vi hp(N, 0), lp(N, 0);
void seive()
{
    int i;
    isPrime[0] = isPrime[1] = false;
    Fo(i, 2, N)
    {
        if (isPrime[i] == true)
        {
            lp[i] = hp[i] = i;
            for (int j = i; j < N; j += i)
            {
                isPrime[j] = false;
                hp[j] = i;
                if (lp[i] == 0)
                    lp[i] = i;
            }
        }
    }
}