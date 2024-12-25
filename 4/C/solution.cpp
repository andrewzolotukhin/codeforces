#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  unordered_map<string, int> map;

  while (t--) {
    string s;
    cin >> s;
    if (map.find(s) == map.end()) {
      cout << "OK" << '\n';
      map[s] = 1;
    } else {
      cout << s << map[s] << '\n';
      map[s]++;
    }
  }
}
