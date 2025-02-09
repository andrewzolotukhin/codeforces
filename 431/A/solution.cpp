#include <bits/stdc++.h>
using namespace std;

void solve() {}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  vector<int> a(4);
  cin >> a[0] >> a[1] >> a[2] >> a[3];

  string inp;
  cin >> inp;

  long long result = 0;
  for (int i = 0; i < inp.size(); i++) {
    result += (long long)a[inp[i] - '1'];
  }

  cout << result << '\n';
}
