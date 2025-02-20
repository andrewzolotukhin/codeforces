#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int result = n;
    if (n >= 2) {
      result = (n & 1) ? ((n - 1) / 2) : (n / 2);
    }

    cout << result << '\n';
  }
}
