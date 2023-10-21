#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double
#define ff first
#define ss second
#define endl '\n'
#define ii pair<int, int>
#define mp make_pair
#define mt make_tuple
#define DESYNC                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0)
#define pb push_back
#define vi vector<int>
#define vii vector<ii>
#define all(x) x.begin(), x.end()
#define EPS 1e-9
#define INF 1e18
#define ROOT 1
#define M 1000000007
#define curtime chrono::steady_clock::now().time_since_epoch().count
const double PI = acos(-1);

inline int mod(int n, int m) {
  int ret = n % m;
  if (ret < 0) ret += m;
  return ret;
}

int gcd(int a, int b) {
  if (a == 0)
    return b;
  else
    return gcd(b % a, a);
}

int main() {
  DESYNC;
  int n;
  cin >> n;
  vector<double> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  cin >> n;
  vector<double> b(n);
  for (int i = 0; i < n; i++) cin >> b[i];
  double ans = 0;
  for (int i = 0; i < n; i++) {
    ans += (a[i] - b[i]) * (a[i] - b[i]);
  }
  cout << fixed << setprecision(10) << sqrt(ans) << endl;
}
