#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n;
  cin >> n;
  vector<long long> a(n);
  long long minV = INT_MAX, maxV = INT_MIN;
  for (auto &x : a) {
    cin >> x;
    minV = min(minV, x);
    maxV = max(maxV, x);
  }

  if (minV == maxV) {
    cout << 0 << ' ' << (n * (n - 1) / 2) << '\n';
    return;
  }

  long long minC = 0, maxC = 0;
  for (auto const v : a) {
    if (v == minV)
      minC++;
    if (v == maxV)
      maxC++;
  }

  cout << (maxV - minV) << ' ' << (maxC * minC) << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
