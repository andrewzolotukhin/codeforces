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

    int s1 = 0;
    int s2 = 0;

    while (n--) {
      int x;
      cin >> x;
      if (x == 1)
        s1++;
      else
        s2++;
    }

    int sum = (s1 + 2 * s2);
    if (sum % 2 != 0) {
      cout << "NO" << endl;
      continue;
    }

    int half = sum / 2;

    if (half % 2 == 0 || (half % 2 == 1 && s1 != 0)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
