#include <bits/stdc++.h>
using namespace std;

bool solve(int n) {
  int a = 2020, b = 2021;
  int m1 = n / 2020 + 1, m2 = n / 2021 + 1;

  for (int i = 0; i < m1; i++) {
    for (int j = 0; j < m2; j++) {
      if (a * i + b * j == n)
        return true;
    }
  }

  return false;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    cout << (solve(n) ? "YES" : "NO") << '\n';
  }
}
