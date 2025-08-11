#include <bits/stdc++.h>
using namespace std;

long long fact(long long n) {
  if (n <= 1)
    return 1;
  return n * fact(n - 1);
}

long long bin(int k, int n) { return fact(n) / (fact(k) * fact(n - k)); }

void solve() {
  long long n;
  cin >> n;

  cout << bin(n - 1, 2 * n - 2) << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
