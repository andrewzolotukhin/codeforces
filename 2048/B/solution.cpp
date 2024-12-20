#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n, int k) {
  vector<int> result = vector<int>(n, 0);

  int next = 1;

  if (k > 1 && k < n) {
    for (int i = 0; i < n / k; i++) {
      result[(i + 1) * k - 1] = next++;
    }

    if (n % k != 0) {
      result[n - 1] = next++;
    }
  }

  for (int i = 0; i < n; i++) {
    if (result[i] == 0)
      result[i] = next++;
  }

  return result;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;
    auto res = solve(n, k);

    for (int i = 0; i < res.size(); i++) {
      cout << res[i] << ((i == res.size() - 1) ? '\n' : ' ');
    }
  }
}
