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

    cout << ((x % 3 == 0) ? "Second\n" : "First\n");
  }
}
