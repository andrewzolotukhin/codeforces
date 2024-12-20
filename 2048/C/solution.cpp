#include <bits/stdc++.h>

using namespace std;

int getXor(string &s1, string &s2) {
  // s1 length >= s2 length
  int res = s2.size();
  for (int i = s1.size() - s2.size(); i < s1.size(); i++) {
    if (s1[i] == s2[i - s1.size() + s2.size()]) {
      return res;
    }
    res++;
  }

  return res;
}

void solve(string &s) {
  int l1 = 1, r1 = s.size(), l2, r2;

  int i = 0;
  while (i < s.size() && s[i] == '1') {
    i++;
  }

  if (i < s.size()) {
    // 0s starts at ith bit;
    int p = i;
    int s2L = s.size() - p;

    int j = 0;
    int maxXor = 0;
    while (j + s2L < s.size()) {
      string kk = s.substr(j, s2L);
      auto x = getXor(s, kk);
      if (x > maxXor) {
        maxXor = x;
        l2 = j + 1;
        r2 = j + s2L;
      }
      j++;
    }
  } else {
    // all bits are 1
    l2 = 1;
    r2 = 1;
  }

  cout << l1 << " " << r1 << " " << l2 << " " << r2 << endl;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    solve(s);
  }
}
