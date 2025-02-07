#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    cout << (k + ((k - 1) / (n - 1))) << '\n';
  }
}
