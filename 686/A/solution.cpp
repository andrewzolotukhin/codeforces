#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, x;
  cin >> n >> x;

  long long sold = 0;
  long long unhappy = 0;

  while (n--) {
    string op;
    long long v;
    cin >> op >> v;
    if (op == "+") {
      x += v;
    } else {
      if (x >= v) {
        x -= v;
        sold += v;
      } else {
        unhappy++;
      }
    }
  }
  cout << x << ' ' << unhappy << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
