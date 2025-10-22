#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<bool> a(n + 1, true);

  for (int i = 2; i * i <= n; i++) {
    for (int j = i * i; j <= n; j += i) {
      a[j] = false;
    }
  }

  vector<int> primes;
  for (auto i = 2; i <= n; i++) {
    if (a[i]) {
      primes.push_back(i);
    }
  }

  int ans = 0;

  for (int i = 6; i <= n; i++) {
    int c = 0;
    for (int j = 0; j < primes.size(); j++) {
      if (i % primes[j] == 0)
        c++;
    }
    if (c == 2) {
      ans++;
    }
  }

  // for (int i = 0; i < (int)primes.size() - 1; i++) {
  //   for (int j = i + 1; j < (int)primes.size(); j++) {
  //     if (primes[i] * primes[j] <= n)
  //       cout << primes[i] << " * " << primes[j] << " = "
  //            << (primes[i] * primes[j]) << '\n',
  //           ans++;
  //   }
  // }

  cout << ans << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
