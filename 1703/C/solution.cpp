#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < n; i++) {
    int b;
    string s;
    cin >> b >> s;

    for (int j = 0; j < b; j++) {
      if (s[j] == 'D')
        a[i] = (a[i] + 1) % 10;
      else
        a[i] = (a[i] + 9) % 10;
    }
    cout << a[i] << " ";
  }
  cout << "\n";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n;
  cin >> n;
  while (n--)
    solve();
}
