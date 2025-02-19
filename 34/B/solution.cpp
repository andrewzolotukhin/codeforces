#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, k;
  cin >> n >> k;

  vector<int> t(n);

  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }

  sort(t.begin(), t.end());

  int result = 0;
  for (int i = 0; i < k; i++) {
    if (t[i] >= 0)
      break;

    result += -t[i];
  }

  cout << result << '\n';
}
