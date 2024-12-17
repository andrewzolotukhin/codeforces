#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  long long res = 0;

  while (n--) {
    string s;
    cin >> s;
    if (s == "Tetrahedron") {
      res += 4;
    }
    if (s == "Cube") {
      res += 6;
    }
    if (s == "Octahedron") {
      res += 8;
    }
    if (s == "Dodecahedron") {
      res += 12;
    }
    if (s == "Icosahedron") {
      res += 20;
    }
  }

  cout << res;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
