#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    vector<int> n(10, 0);
    for (int i = 0; i < 3; i++) {
      int x;
      cin >> x;
      n[x]++;
    }

    for (int i = 0; i < 10; i++) {
      if (n[i] == 1) {
        cout << i << '\n';
      }
    }
  }
}
