#include <bits/stdc++.h>
using namespace std;

bool can(int m, int s) { return s <= m * 9 && s >= 0; }

void solve(int m, int s) {
  string minn(m, '0'), maxx(m, '0');
  if (!can(m, s)) {
    cout << "-1 -1\n";
    return;
  }
  int sz = s;
  int cminn = 0, cmaxx = 0;
  for (int i = 0; i < m; i++) {
    for (int d = '0'; d <= '9'; d++) {
      if ((i > 0 || d > '0' || (m == 1 && d == '0')) &&
          can(m - i - 1, sz - int(d - '0'))) {
        minn[i] = d;
        cminn++;
        sz -= int(d - '0');
        break;
      }
    }
  }

  sz = s;
  for (int i = 0; i < m; i++) {
    for (int d = '9'; d >= '0'; d--) {
      if ((i > 0 || d > '0' || (m == 1 && d == '0')) &&
          can(m - i - 1, sz - int(d - '0'))) {
        maxx[i] = d;
        cmaxx++;
        sz -= int(d - '0');
        break;
      }
    }
  }
  if (cminn == m && cmaxx == m) {
    cout << minn << ' ' << maxx << '\n';
  } else {
    cout << "-1 -1\n";
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int m, s;
  cin >> m >> s;
  solve(m, s);
}
