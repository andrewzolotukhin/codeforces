#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &players) {
  int p1 = players[0];
  int p2 = players[1];
  int p3 = players[2];
  int p4 = players[3];
  sort(players.begin(), players.end(), greater<int>());

  int sf1 = max(p1, p2);
  int sf2 = max(p3, p4);

  return (sf1 == players[0] || sf1 == players[1]) &&
         (sf2 == players[0] || sf2 == players[1]);
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    vector<int> players(4);
    for (auto &player : players) {
      cin >> player;
    }

    cout << (solve(players) ? "YES" : "NO") << '\n';
  }
}
