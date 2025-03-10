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

    int c = 0;
    int mc = 0;

    while (n--) {
      int x;
      cin >> x;

      if (x == 0) {
        c++;
      } else {
        mc = max(mc, c);
        c = 0;
      }
    }
    mc = max(mc, c);

    cout << mc << '\n';
  }
}
