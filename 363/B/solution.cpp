#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, k;
  cin >> n >> k;
  vector<int> fence(n);

  for (int i = 0; i < n; i++) {
    cin >> fence[i];
  }

  long long windowSum = 0;
  int result = 0;

  for (int i = 0; i < k; i++) {
    windowSum += fence[i];
  }
  long long minSum = windowSum;

  for (int i = 1; i < n - k + 1; i++) {
    windowSum += fence[i + k - 1] - fence[i - 1];
    if (windowSum < minSum) {
      result = i;
      minSum = windowSum;
    }
  }

  cout << result + 1 << '\n';
}
