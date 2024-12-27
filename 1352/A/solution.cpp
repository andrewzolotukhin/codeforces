#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t, n, k;
  cin >> t;

  while (t--) {
    cin >> n;
    k = 1;

    vector<int> res;

    while (n > 9) {
      if (n % 10 == 0) {
        k *= 10;
        n /= 10;
        continue;
      } else {
        res.push_back((k * (n % 10)));
        n /= 10;
        k = (k * 10);
      }
    }

    if (n > 0) {
      res.push_back(n * k);
    }

    cout << res.size() << '\n';
    for (auto r : res) {
      cout << r << ' ';
    }
    cout << '\n';
  }
}
