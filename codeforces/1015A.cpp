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
const int N = 1e2+5;

int n, m, s[N];

int main() {
  scanf("%d%d", &n, &m);
  for (int l, r, i = 0; i < n; i++) {
    scanf("%d%d", &l, &r);
    s[l]++; s[r+1]--;
  }

  vector<int> ans;
  int acc = 0;
  for (int i = 1; i <= m; i++) {
    acc += s[i];
    if (!acc) ans.push_back(i);
  }

  printf("%d\n", (int)ans.size());
  for (int x : ans) printf("%d ", x);
  printf("\n");

  return 0;
}
