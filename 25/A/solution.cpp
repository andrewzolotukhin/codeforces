#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, lastEven, lastOdd, countEven = 0, countOdd = 0;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    int k;
    cin >> k;
    if (k & 1) {
      countOdd++;
      lastOdd = i;
    } else {
      countEven++;
      lastEven = i;
    }
  }

  if (countOdd > countEven) {
    cout << lastEven << '\n';
  } else {
    cout << lastOdd << '\n';
  }
}
