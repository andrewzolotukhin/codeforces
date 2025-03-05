#include <bits/stdc++.h>
using namespace std;

pair<int, int> solve(int n) {
  int k = n / 3;
  int r = n % 3;

  if (r == 0) {
    return {k, k};
  }

  if (r == 1) {
    return {k + 1, k};
  }

  if (r == 2) {
    return {k, k + 1};
  }

  assert(false);
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    auto result = solve(n);
    cout << result.first << " " << result.second << "\n";
  }
}
