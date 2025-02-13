#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, m;
  cin >> n >> m;

  vector<bool> isPrime(101, true);

  for (int i = 2; i < isPrime.size(); i++) {
    for (int j = 2 * i; j < isPrime.size(); j += i) {
      isPrime[j] = false;
    }
  }

  for (int i = n + 1; i < isPrime.size(); i++) {
    if (isPrime[i]) {
      if (i == m) {
        cout << "YES\n";
        return 0;
      }
      break;
    }
  }

  cout << "NO\n";
}
