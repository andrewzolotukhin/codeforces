#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;

  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    long long minV = INT_MAX, maxV = INT_MIN;

    while (n--) {
      long long x;
      cin >> x;
      minV = min(minV, x);
      maxV = max(maxV, x);
    }

    cout << (maxV - minV) << '\n';
  }
}
