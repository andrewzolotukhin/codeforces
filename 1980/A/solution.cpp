#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n, m;
    string s;
    cin >> n >> m >> s;
    vector<int> rem(7, m);
    for (char c : s) {
      rem[(int)(c - 'A')]--;
    }
    int ans = 0;
    for (auto r : rem)
      if (r > 0)
        ans += r;
    cout << ans << '\n';
  }
}
