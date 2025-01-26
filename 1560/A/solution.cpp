#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int x;
    cin >> x;

    int k = 0;
    int last = 0;

    while (k < x) {
      last++;
      if (last % 3 == 0 || (last > 10 && last % 10 == 3)) {
        continue;
      }

      k++;
    }

    cout << last << '\n';
  }
}
