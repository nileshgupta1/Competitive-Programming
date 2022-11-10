//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,avx512f")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <stack>
#include <queue>
#include <bitset>
#include <numeric>
#include <cassert>
#include <memory>
#include <random>
#include <functional>
#include <complex>
#include <immintrin.h>
#include <stdexcept>
#ifdef DEBUG
#include "./CompetitiveProgrammingCpp/Utils/debug.hpp"
#include "./CompetitiveProgrammingCpp/Utils/Timer.hpp"
#include "./CompetitiveProgrammingCpp/Utils/sample.hpp"
#else
#define dump(...)
template <class T>
constexpr inline auto d_val(T a, T b) { return a; }
#endif

/* macro */
#define FOR(i, b, e) for (ll i = (ll)(b); i < (ll)(e); ++i)
#define RFOR(i, b, e) for (ll i = (ll)((e)-1); i >= (ll)(b); --i)
#define REP(i, n) FOR(i, 0, (n))
#define RREP(i, n) RFOR(i, 0, (n))
#define REPC(x, c) for (const auto &x : (c))
#define REPI2(it, b, e) for (auto it = (b); it != (e); ++it)
#define REPI(it, c) REPI2(it, (c).begin(), (c).end())
#define RREPI(it, c) REPI2(it, (c).rbegin(), (c).rend())
#define REPI_ERACE2(it, b, e) for (auto it = (b); it != (e);)
#define REPI_ERACE(it, c) REPI_ERACE2(it, (c).begin(), (c).end())
#define ALL(x) (x).begin(), (x).end()
#define cauto const auto &
/* macro func */
template <class T>
inline auto sort(T &t) { std::sort(ALL(t)); }
template <class T>
inline auto rsort(T &t) { std::sort((t).rbegin(), (t).rend()); }
template <class T>
inline auto unique(T &t) { (t).erase(unique((t).begin(), (t).end()), (t).end()); }
template <class T, class S>
inline auto chmax(T &t, const S &s)
{
    if (s > t)
    {
        t = s;
        return true;
    }
    return false;
}
template <class T, class S>
inline auto chmin(T &t, const S &s)
{
    if (s < t)
    {
        t = s;
        return true;
    }
    return false;
}
inline auto BR() { std::cout << "\n"; }

/* type define */
using ll = long long;
using VS = std::vector<std::string>;
using VL = std::vector<long long>;
using VVL = std::vector<VL>;
using VVVL = std::vector<VVL>;
using VVVVL = std::vector<VVVL>;
using VVVVVL = std::vector<VVVVL>;
using VD = std::vector<double>;
template <class T>
using V = std::vector<T>;
template <class T = ll, class U = T>
using P = std::pair<T, U>;
using PAIR = P<ll>;

/* using std */
using std::cout;
constexpr char endl = '\n';
using std::bitset;
using std::cin;
using std::deque;
using std::list;
using std::map;
using std::multimap;
using std::multiset;
using std::pair;
using std::priority_queue;
using std::queue;
using std::set;
using std::stack;
using std::string;
using std::unordered_map;
using std::unordered_multimap;
using std::unordered_multiset;
using std::unordered_set;
using std::vector;

/* Initial processing  */
struct Preprocessing
{
    Preprocessing()
    {
        std::cin.tie(0);
        std::ios::sync_with_stdio(0);
    };
} _Preprocessing;

/* Remove the source of the bug */
auto pow(signed, signed) { assert(false); }

/* define hash */
namespace std
{
    template <>
    class hash<std::pair<ll, ll>>
    {
    public:
        size_t operator()(const std::pair<ll, ll> &x) const { return hash<ll>()(1000000000 * x.first + x.second); }
    };
}

/* input */
template <class T>
std::istream &operator>>(std::istream &is, vector<T> &vec)
{
    for (T &x : vec)
        is >> x;
    return is;
}

/* constant value */
constexpr ll MOD = 1000000007;
// constexpr ll MOD = 998244353;

//=============================================================================================

signed main()
{
    ll t;
    cin >> t;
    REP(_, t)
    {
        map<ll, ll> mp;
        ll n;
        cin >> n;
        REP(__, n)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }
        ll mx = 0;
        for (const auto &[__, c] : mp)
        {
            chmax(mx, c);
        }
        cout << (mp.size() == 1 ? 0 : n - mx) << endl;
    }
}