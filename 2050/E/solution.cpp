#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

void solve() {
  int t;
  cin >> t;
  while (t--) {
    string a, b, c;
    cin >> a >> b >> c;

    int diff = abs((int)(a.size() - b.size()));

    unordered_map<char, int> amap, bmap, cmap;

    string end = c.substr(c.size() - diff);

    while (end.size() > 0) {
      if (a.size() >= end.size() &&
          a.compare(a.size() - end.size(), end.size(), end) == 0) {
        a.erase(a.size() - end.size(), end.size());
        break;
      }
      if (b.size() >= end.size() &&
          b.compare(b.size() - end.size(), end.size(), end) == 0) {
        b.erase(b.size() - end.size(), end.size());
        break;
      }

      end.erase(0, 1);
    }

    cout << end << '\n';

    for (int i = 0; i < a.size(); i++) {
      amap[a[i]]++;
    }
    for (int i = 0; i < b.size(); i++) {
      bmap[b[i]]++;
    }
    for (int i = 0; i < c.size() - end.size(); i++) {
      cmap[c[i]] = cmap[c[i]] + 1;
    }

    for (const auto &pair : cmap) {
      cout << pair.first << ": " << pair.second << '\n';
    }
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
