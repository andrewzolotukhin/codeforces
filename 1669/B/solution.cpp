#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    unordered_map<int, int> freq;
    int n;
    cin >> n;
    bool found = false;
    while (n--) {
      int x;
      cin >> x;
      if (found)
        continue;
      freq[x]++;
      if (freq[x] > 2) {
        cout << x << '\n';
        found = true;
      }
    }
    if (!found) {
      cout << "-1\n";
    }
  }
}
