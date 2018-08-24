// @subject: 
// @diff: 

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

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

int p[N];
set<int> s;
int q;

bool is_prime(int x) {
  for (int i = 2; i*i <= x; i++)
    if (!p[i] and x%i == 0)
      return 0;
  return x > 1;
}

int main() {
  for (ll i = 2; i < N; i++) if (!p[i]) {
    for (ll j = i*i; j < N; j+=i) p[j] = 1;
    for (ll j = i; j < INF; j *= i) s.insert(j);
  }

  scanf("%d", &q);
  printf("%s\n", s.count(q) or is_prime(q) ? "yes" : "no");

  return 0;
}
