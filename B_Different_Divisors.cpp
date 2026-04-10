#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <deque>
#include <numeric>
#include <limits>
#include <iomanip>
#include <cstring>

using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#define debug2(x, y) cerr << #x << " = " << x << ", " << #y << " = " << y << endl;
#else
#define debug(x)
#define debug2(x, y)
#endif

const ll INF = 1e18;
const int MOD = 1e9 + 7;

ll gcdll(ll a, ll b) { return b ? gcdll(b, a % b) : a; }

ll lcmll(ll a, ll b)
{
    return (a / gcdll(a, b)) * b;
}

ll binpow(ll a, ll b, ll m = MOD)
{
    ll res = 1;
    a %= m;
    while (b)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

template <typename T>
void print(vector<T> &v)
{
#ifndef ONLINE_JUDGE
    for (auto &x : v)
        cerr << x << " ";
    cerr << endl;
#endif
}

vector<long long> primeNumbers;

void solve()
{
    ll d;
    cin >> d;

    ll p = *lower_bound(all(primeNumbers), d + 1);
    ll q = *lower_bound(all(primeNumbers), p + d);

    cout << min((1LL * p * p * p), (1LL * p * q)) << endl;
}

int main()
{
    fast_io;

#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif
    for (int i = 2; i <= 100000; i++)
    {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            primeNumbers.pb(i);
    }
    int t = 1;
    cin >> t;

    while (t--)
        solve();

    return 0;
}