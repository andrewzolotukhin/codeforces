#include <bits/stdc++.h>
using namespace std;

long long fact(long long n) {
  long long res = 1;
  for (long long i = 2; i <= n; i++) {
    res *= i;
  }
  return res;
}

void solve() {
  long long n, m;
  cin >> n >> m;
  cout << fact(min(n, m)) << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
