#include <bits/stdc++.h>
#define DEBUG false
#define debugf if (DEBUG) printf
#define MAXN 109
#define MAXM 10000009
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define EPS 1e-9
#define PI 3.141592653589793238462643383279502884
#define FOR(x,n) for(int x=0; (x)<int(n); (x)++)
#define FOR1(x,n) for(int x=1; (x)<=int(n); (x)++)
#define REP(x,n) for(int x=int(n)-1; (x)>=0; (x)--)
#define REP1(x,n) for(int x=(n); (x)>0; (x)--)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
#define all(x) x.begin(), x.end()
#define mset(x,y) memset(&x, (y), sizeof(x));
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int uint;
#define MAXS 2009

int n;
int v[MAXN];
bool vis[MAXN][MAXS][MAXN];
bool ans[MAXM];

void bt(int i, int sum, int cnt) {
  if (i == n) {
    ans[sum*cnt] = true;
    return;
  }
  if (vis[i][sum][cnt]) return;
  vis[i][sum][cnt] = true;
  bt(i+1, sum + v[i], cnt+1);
  bt(i+1, sum, cnt);
}

int main() { 
  scanf("%d", &n);
  FOR(i, n) scanf("%d", &v[i]);
  bt(0, 0, 0);
  int cnt = 0;
  FOR1(i, MAXM-1) {
    if (ans[i]) cnt++;
  }
  printf("%d\n", cnt);
  return 0;
}