#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long a, b, c;

  cin >> a >> b >> c;

  long long m = max(a, max(b, c));

  if (a == b && b == c && c == a) {
    cout << "1 1 1\n";
    return;
  }

  long long aa = 0, ba = 0, ca = 0;

  if (a == m && b == m) {
    aa = 1;
    ba = 1;
  }

  if (a == m && c == m) {
    aa = 1;
    ca = 1;
  }

  if (b == m && c == m) {
    ba = 1;
    ca = 1;
  }

  cout << (aa ? aa : (a == m ? 0 : m - a + 1)) << ' ';
  cout << (ba ? ba : (b == m ? 0 : m - b + 1)) << ' ';
  cout << (ca ? ca : (c == m ? 0 : m - c + 1)) << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
