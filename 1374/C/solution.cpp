#include <bits/stdc++.h>
using namespace std;

int solve(int n, string &s) {
  stack<int> st;

  int len = n;
  int ans = 0;

  for (int i = 0; i < len; i++) {
    if (i < s.size() && s[i] == '(') {
      st.push(i);
    } else {
      if (st.empty()) {
        ans++;
      } else {
        st.pop();
      }
    }
  }

  return ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    cout << solve(n, s) << '\n';
  }
}
