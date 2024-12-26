#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;

  unordered_map<char, int> freq, freqRes;

  for (char c : s1) {
    freq[c]++;
  }

  for (char c : s2) {
    freq[c]++;
  }

  for (char c : s3) {
    freqRes[c]++;
  }

  if (freqRes.size() != freq.size()) {
    cout << "NO" << endl;
    return 0;
  }

  for (auto v : freqRes) {
    if (freq[v.first] != freqRes[v.first]) {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
}
