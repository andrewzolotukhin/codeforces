#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n;

  cin >> n;

  int s = 0;

  while (n--) {
    int a, b;
    cin >> a >> b;

    if (a == b)
      continue;

    s += (a > b) ? 1 : -1;
  }

  if (s == 0) {
    cout << "Friendship is magic!^^";
  } else {
    cout << (s > 0 ? "Mishka" : "Chris");
  }

  cout << '\n';
}
