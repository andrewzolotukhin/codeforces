#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int a, b;

  cin >> a >> b;

  int mimimum = min(a, b);

  cout << ((mimimum & 1) ? "Akshat" : "Malvika") << '\n';
}
