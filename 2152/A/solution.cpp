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
    set<int> s;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      s.insert(x);
    }
    cout << s.size() * 2 - 1 << '\n';
  }
}
