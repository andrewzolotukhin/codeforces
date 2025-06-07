#include <bits/stdc++.h>
using namespace std;

void solve(int n, int q, string &s) {
  vector<vector<set<int>>> st(3, vector<set<int>>(3));
  for (int i = 0; i < q; i++) {
    char x, y;
    cin >> x >> y;
    st[x - 'a'][y - 'a'].insert(i);
  }

  for (int i = 0; i < n; i++) {
    if (s[i] == 'a') {
      continue;
    }

    if (s[i] == 'b') {
      if (!st[1][0].empty()) {
        st[1][0].erase(st[1][0].begin());
        s[i] = 'a';
        continue;
      }
      if (!st[1][2].empty()) {
        auto ind = *st[1][2].begin();
        auto lb = st[2][0].lower_bound(ind);
        if (lb != st[2][0].end()) {
          st[1][2].erase(ind);
          st[2][0].erase(lb);
          s[i] = 'a';
          continue;
        }
      }
    }

    if (s[i] == 'c') {
      if (!st[2][0].empty()) {
        st[2][0].erase(st[2][0].begin());
        s[i] = 'a';
        continue;
      }
      if (!st[2][1].empty()) {
        auto ind = *st[2][1].begin();
        st[2][1].erase(ind);
        s[i] = 'b';
        auto lb = st[1][0].lower_bound(ind);
        if (lb != st[1][0].end()) {
          st[1][0].erase(lb);
          s[i] = 'a';
        }
      }
    }
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    solve(n, q, s);
    cout << s << "\n";
  }
}
