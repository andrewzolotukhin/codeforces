#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  while (n--) {
    int a;
    cin >> a;

    if (a == 1) {
      cout << "HARD" << endl;
      return;
    }
  }
  cout << "EASY" << endl;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
