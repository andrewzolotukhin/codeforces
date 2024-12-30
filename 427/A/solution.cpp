#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, c = 0, p = 0;

  cin >> n;

  while (n--) {
    int a;
    cin >> a;
    if (a == -1 && p == 0) {
      c++;
    } else {
      p += a;
    }
  }

  cout << c << '\n';
}
