#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, a, b, c;
  cin >> n >> a >> b >> c;
  long long total = a + b + c;

  int ans = (n / total) * 3;

  int rem = n - (n / total) * total;

  vector<long long> vals = {a, b, c};

  for (int i = 0; i < 3 && rem > 0; i++) {
    rem -= vals[i];
    ans++;
  }

  cout << ans << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
