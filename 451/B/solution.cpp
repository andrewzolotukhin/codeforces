#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &v : a)
    cin >> v;

  if (n == 1) {
    cout << "yes\n";
    cout << "1 1\n";
    return 0;
  }

  int i = 0;

  while (i < n - 1 && a[i] < a[i + 1])
    i++;

  if (i == n - 1) {
    if (a[i] > a[i - 1]) {
      cout << "yes\n";
      cout << "1 1\n";
    } else {
      cout << "no\n";
    }
    return 0;
  }

  int start = i;
  i++;
  while (i <= n - 1 && ((i == 0) || (a[i] < a[i - 1]))) {
    i++;
  }
  int end = i - 1;

  if (i < n - 1) {
    while (i <= n - 1) {
      if (a[i] < a[i - 1]) {
        cout << "no\n";
        return 0;
      }
      i++;
    }
  }

  if (end + 1 < n && a[start] > a[end + 1]) {
    cout << "no\n";
    return 0;
  }

  if (start > 0 && a[end] < a[start - 1]) {
    cout << "no\n";
    return 0;
  }

  cout << "yes\n";
  cout << (start + 1) << ' ' << (end + 1) << '\n';
  return 0;
}
