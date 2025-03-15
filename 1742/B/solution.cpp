#include <bits/stdc++.h>
using namespace std;

bool solve(int n) {
  map<int, int> cnt;
  bool res = true;
  while (n--) {
    int x;
    cin >> x;

    cnt[x]++;
    if (cnt[x] > 1) {
      res = false;
    }
  }
  return res;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    cout << (solve(n) ? "YES" : "NO") << "\n";
  }
}
