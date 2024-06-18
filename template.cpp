#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <chrono>
#include <vector>
#include <random>
#include <string>
#include <queue>
#include <cmath>
#include <stack>
#include <set>
#include <map>

using namespace std;

using ll = long long;
using db = long double;
using bl = bool;

template <typename T1, typename T2>
istream& operator>>(istream& in, pair<T1, T2>& a) {
    in >> a.first >> a.second;
    return in;
}

template <typename T>
istream& operator>>(istream& in, vector<T>& a) {
    for (T& x : a) in >> x;
    return in;
}


#ifdef LOCAL
string SEP = ", ";
#else
string SEP = " ";
#endif

template <typename T1, typename T2>
ostream& operator<<(ostream& out, pair<T1, T2> a) {
#ifdef LOCAL
    out << '(' << a.first << SEP << a.second << ')';
#else
    out << a.first << SEP << a.second;
#endif
    return out;
}

template <typename T>
ostream& operator<<(ostream& out, vector<T> a) {
#ifdef LOCAL
    out << "[";
    bool f = true;
    for (T& x : a) {
        if (!f) out << SEP;
        out << x;
        f = false;
    }
    out << "]";
#else
    for (T& x : a)
        out << x << SEP;
#endif
    return out;
}

template <typename T>
ostream& operator<<(ostream& out, set<T> a) {
#ifdef LOCAL
    out << "{";
    bool f = true;
    for (T x : a) {
        if (!f) out << SEP;
        out << x;
        f = false;
    }
    out << "}";
#else
    for (T x : a)
        out << x << SEP;
#endif
    return out;
}

template <typename T>
ostream& operator<<(ostream& out, multiset<T> a) {
#ifdef LOCAL
    out << "{";
    bool f = true;
    for (T x : a) {
        if (!f) out << SEP;
        out << x;
        f = false;
    }
    out << "}";
#else
    for (T x : a)
        out << x << SEP;
#endif
    return out;
}


mt19937_64 rnd;

ll LNF = 1e18 + 1;
int INF = 1e9 + 1;
short SNF = 3e4 + 1;

//ll M = 1e9 + 7;


template <typename T>
bl MI(T& a, T b) {
    if (b < a) {
        a = b;
        return true;
    }
    return false;
}

template <typename T>
bl MA(T& a, T b) {
    if (b > a) {
        a = b;
        return true;
    }
    return false;
}

template <typename T1, typename T2>
bl ORD(T1& a, T2& b) {
    if (a > b) {
        swap(a, b);
        return true;
    }
    return false;
}


template <typename T1, typename T2>
ll MD(T1 a, T2 M) {
    if (a < -M) {
        a = a % M;
        return a + (a < 0) * M;
    }
    if (a < 0) {
        return a + M;
    }
    if (a >= 2 * M) {
        return a % M;
    }
    return a - M;
}

ll BP(ll a, ll n) {
    if (n == 0) return 1;
    if (n % 2 == 0) {
        ll x = BP(a, n / 2);
        return x * x;
    } else {
        return BP(a, n - 1) * a;
    }
}

ll BP(ll a, ll n, ll M) {
    if (n == 0) return 1;
    if (n % 2 == 0) {
        ll x = BP(a, n / 2, M);
        return MD(x * x, M);
    } else {
        return MD(BP(a, n - 1, M) * a, M);
    }
}


string B2(ll n) {
    string ans;
    while (n != 0) {
        ans += (n % 2 ? "1" : "0");
        n /= 2;
    }
    return {ans.rbegin(), ans.rend()};
}

ll B10(string n) {
    ll ans = 0;
    ll k = 1;
    reverse(n.begin(), n.end());
    for (char i : n) {
        if (i == '1') ans += k;
        k *= 2;
    }
    return ans;
}


bool ID(char c) {
    return '0' <= c && c <= '9';
}

bool IL(char c) {
    return 'a' <= c && c <= 'z';
}




void CASE() {

}




void DBG() {
}

void PRE() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}


signed main() {
#ifdef LOCAL
    freopen("$DIR$/in.txt", "r", stdin);
    clock_t BEGIN = clock();
    rnd.seed(1);
#else
    rnd.seed(chrono::high_resolution_clock::now().time_since_epoch().count());
#endif

    DBG();

    PRE();

    int T = 1;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        CASE();
//        cout << endl;
        cout << '\n';
    }

#ifdef LOCAL
    cout << "\n_\n" << (clock() - BEGIN) * 1000 / CLOCKS_PER_SEC << " ms";
#endif

    exit('U' ^ 'U');
}//смартфон vivo
