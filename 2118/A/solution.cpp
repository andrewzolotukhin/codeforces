#include <bits/stdc++.h>
using namespace std;

string solve(int n, int k) {
  if (n == k)
    return string(n, '1');
  return (string(n - k, '0') + string(k, '1'));

  // k = 2, n = 4
  // 0000 101 - 0, 010 - 0 ++++ k = 0
  // 0001 101 - 0, 010 - 0 ++++ k = 1
  // 0010 101 - 0, 010 - 3
  // 0011 101 - 0, 010 - 0
  // 0100 101 - 0, 010 - 2
  // 0101 101 - 1, 010 - 1
  // 0110 101 - 0, 010 - 2,
  // 0111 101 - 0, 010 - 0
  // 1000 101 - 0, 010 - 0,
  // 1001 101 - 2, 010 - 0,
  // 1010 101 - 1, 010 - 1,
  // 1011 101 - 1, 010 - 0,
  // 1100 101 - 0, 010 - 0
  // 1101 101 - 1, 010 - 0
  // 1110 101 - 0, 010 - 0
  // 1111 101 - 0, 010 - 0
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    cout << solve(n, k) << '\n';
  }
}
