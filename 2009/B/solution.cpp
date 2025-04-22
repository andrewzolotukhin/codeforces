#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    stack<int> st;
    while (n--) {
      string s;
      cin >> s;
      for (int i = 0; i < s.size(); i++) {
        if (s[i] == '#') {
          st.push(i + 1);
          break;
        }
      }
    }

    while (!st.empty()) {
      int x = st.top();
      st.pop();
      cout << x << ' ';
    }
    cout << '\n';
  }
}
