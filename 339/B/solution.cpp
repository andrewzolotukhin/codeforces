#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, m;
  cin >> n >> m;

  vector<int> t;

  for (int i = 0; i < m; i++) {
    int k;
    cin >> k;
    t.push_back(k - 1);
  }

  int pos = 0;
  long long res = 0;
  for (int i = 0; i < t.size(); i++) {
    if (pos > t[i]) {
      int diff = n - 1 - pos + t[i] + 1;
      res += (long long)diff;
    } else {
      int diff = t[i] - pos;
      res += (long long)diff;
    }
    pos = t[i];
  }

  cout << res << '\n';
}
