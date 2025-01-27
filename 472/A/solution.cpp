#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n;

  cin >> n;

  vector<bool> prime(1000000 + 1, true);
  prime[1] = true;
  prime[2] = true;
  for (int i = 2; i <= 1000000; i++) {
    if (!prime[i]) {
      continue;
    }

    for (int j = i * 2; j <= 1000000; j += i) {
      prime[j] = false;
    }
  }

  for (int i = 1; i < n; i++) {
    if (!prime[i] && !prime[n - i]) {
      cout << i << " " << n - i << '\n';
      return 0;
    }
  }
}
