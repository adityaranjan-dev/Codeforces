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

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int i = 0;
    int isValid = 0;

    while (i < n && (s[i] == 'm' || s[i] == 'M'))
    {
        isValid = 1;
        i++;
    }

    if (isValid != 1)
    {
        cout << "NO" << endl;
        return;
    }

    while (i < n && (s[i] == 'e' || s[i] == 'E'))
    {
        isValid = 2;
        i++;
    }

    if (isValid != 2)
    {
        cout << "NO" << endl;
        return;
    }

    while (i < n && (s[i] == 'o' || s[i] == 'O'))
    {
        isValid = 3;
        i++;
    }

    if (isValid != 3)
    {
        cout << "NO" << endl;
        return;
    }

    while (i < n && (s[i] == 'w' || s[i] == 'W'))
    {
        isValid = 4;
        i++;
    }

    if (isValid != 4)
    {
        cout << "NO" << endl;
        return;
    }

    if (i < n)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}


int main()
{
    fast_io;

#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;

    while (t--)
        solve();

    return 0;
}