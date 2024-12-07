#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  cout << "I hate";

  for (int i = 1; i < n; i++) {
    cout << " that " << ((i & 1) ? "I love" : "I hate");
  }

  cout << " it\n";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
