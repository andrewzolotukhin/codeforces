#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n, s;
    cin >> n >> s;
    int minP = INT_MAX, maxP = INT_MIN;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      minP = min(minP, x);
      maxP = max(maxP, x);
    }

    int dist = 0;
    if (s < minP) {
      dist = maxP - s;
    } else if (s > maxP) {
      dist = s - minP;
    } else {
      dist = maxP - minP + min(s - minP, maxP - s);
    }

    cout << dist << '\n';
  }
}
