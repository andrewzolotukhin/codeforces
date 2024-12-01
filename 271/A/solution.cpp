#include <bits/stdc++.h>
using namespace std;

bool isGood(int year) {
  int p1, p2, p3, p4;
  p1 = year % 10;
  year /= 10;
  p2 = year % 10;
  year /= 10;
  p3 = year % 10;
  year /= 10;
  p4 = year;
  return p1 != p2 && p1 != p3 && p1 != p4 && p2 != p3 && p2 != p4 && p3 != p4;
}

void solve() {
  int y;
  cin >> y;
  while (y++) {
    if (isGood(y)) {
      cout << y << endl;
      return;
    }
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
