#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n;
  cin >> n;
  int s = 0;
  for (long long i = 0; i < n; i++) {
    long long x;
    cin >> x;
    s += x;
  }

  if (s < n) {
    cout << 1 << '\n';
  } else {
    cout << s - n << '\n';
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
