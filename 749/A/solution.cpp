#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
  int twos = n / 2;
  int rem = n % 2;

  if (n == 3) {
    cout << "1\n3\n";
    return;
  }

  if (rem == 0) {
    cout << twos << '\n';
    for (int i = 0; i < twos; i++) {
      cout << 2;
      if (i != twos - 1)
        cout << ' ';
    }
    cout << '\n';
    return;
  }

  cout << twos << '\n';
  cout << 3 << ' ';
  for (int i = 0; i < twos - 1; i++) {
    cout << 2;
    if (i != twos - 2)
      cout << ' ';
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n;
  cin >> n;
  solve(n);
}
