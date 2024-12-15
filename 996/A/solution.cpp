#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n;

  cin >> n;

  int result = 0;
  vector<long long> notes = {100, 20, 10, 5, 1};

  while (n) {
    for (int i = 0; i < notes.size(); i++) {
      if (!n)
        break;
      auto d = n / notes[i];
      result += d;
      n -= d * notes[i];
    }
  }

  cout << result << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
