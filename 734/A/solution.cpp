#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  int n;

  cin >> n;

  cin >> s;
  int c = 0;

  for (size_t i = 0; i < n; i++) {
    (s[i] == 'A') ? c++ : c--;
  }

  if (c == 0) {
    cout << "Friendship";
  } else if (c < 0) {
    cout << "Danik";
  } else {
    cout << "Anton";
  }
  cout << endl;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
