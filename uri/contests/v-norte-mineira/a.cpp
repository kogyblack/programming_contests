#include <bits/stdc++.h>
using namespace std;

#define st first
#define nd second
#define mp make_pair
#define pb push_back
#define cl(x, v) memset((x), (v), sizeof(x))
#define gcd(x,y) __gcd((x),(y))

#ifndef ONLINE_JUDGE
  #define db(x) cerr << #x << " == " << x << endl
  #define dbs(x) cerr << x << endl
  #define _ << ", " <<
#else
  #define db(x) ((void)0)
  #define dbs(x) ((void)0)
#endif

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;

const ld EPS = 1e-9, PI = acos(-1.);
const int INF = 0x3f3f3f3f, MOD = 1e9+7;
const int N = 1e5+5;

int n, m, k, a, v[N];
ll ans;

int main() {
  while (~scanf("%d%d%d", &n, &m, &k)) {
    memset(v, 0, sizeof(v));
    ans = 0;
    for (int i = 0; i < n; i++) scanf("%d", &a), v[a%k]++;
    for (int i = 0; i < m; i++) {
      scanf("%d", &a);
      a = (k - (a%k))%k;
      ans += v[a];
    }
    printf("%lld\n", ans);
  }
  return 0;
}
