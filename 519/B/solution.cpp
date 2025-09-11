#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  unordered_map<int, int> freq;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    freq[x]++;
  }

  unordered_map<int, int> freq2;
  for (int i = 0; i < n - 1; i++) {
    int x;
    cin >> x;
    freq2[x]++;
  }

  for (auto [k, v] : freq) {
    if (freq[k] == freq2[k] + 1) {
      cout << k << "\n";
      break;
    }
  }

  unordered_map<int, int> freq3;
  for (int i = 0; i < n - 2; i++) {
    int x;
    cin >> x;
    freq3[x]++;
  }

  for (auto [k, v] : freq2) {
    if (freq2[k] == freq3[k] + 1) {
      cout << k << "\n";
      break;
    }
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
